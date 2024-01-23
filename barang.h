#ifndef BARANG_H_INCLUDED
#define BARANG_H_INCLUDED


#include <iostream>
using namespace std;



#define info(P) (P)->info
#define next(P) P->next
#define first(L) ((L).first)


struct child{
    int idBarang;
    string namaBarang;
    int harga;
};
typedef child infoChild;
typedef struct elm_Child *adr_Child;
struct elm_Child{
    infoChild info;
    adr_Child next;

};
struct list_child{
    adr_Child first;
};

void createList(list_child &L);
void insertLastChild(list_child &L, adr_Child P);
void deleteFirstChild(list_child &L, adr_Child &P);

adr_Child createElmChild(infoChild x);
void dealokasiChild(adr_Child &P);
void showAllChild(list_child L);
adr_Child cariDataChild(list_child L, int id);
void printMinimumHarga(list_child L, int harga);
#endif // BARANG_H_INCLUDED
