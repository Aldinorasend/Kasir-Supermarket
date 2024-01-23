#ifndef PELANGGAN_H_INCLUDED
#define PELANGGAN_H_INCLUDED

#include <iostream>
using namespace std;
#include "relasi.h"


#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define child(P) P->child

struct parent{
    int idPelanggan;
    string name;
    string address;
};
typedef parent infoParent;
typedef struct elm_Parent *adr_Parent;

struct elm_Parent{
    infoParent info;
    list_Relation child;
    adr_Parent next;

};
struct list_parent{
    adr_Parent first;
};

void createList(list_parent &L);
void deleteFirstParent(list_parent &L, adr_Parent &P);
void insertLastParent(list_parent &L, adr_Parent P);

void showAllParent(list_parent L);
void showAllParentwithChild(list_parent L);
adr_Parent createElmParent(infoParent x);
void dealokasiParent(adr_Parent &P);
adr_Parent cariDataParent(list_parent L, int id);

#endif // PELANGGAN_H_INCLUDED
