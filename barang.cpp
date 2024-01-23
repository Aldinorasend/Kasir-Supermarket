#include "barang.h"

void createList(list_child &L){
     first(L) = NULL;
}
adr_Child createElmChild(infoChild x){
    adr_Child P = new elm_Child;
    info(P).idBarang = x.idBarang;
    info(P).namaBarang = x.namaBarang;
    info(P).harga = x.harga;
    next(P) = NULL;
    return P;
}
void insertLastChild(list_child &L, adr_Child P){
  if (first(L) == NULL){
        first(L) = P;
    }else{
        adr_Child R = first(L);
        while(next(R) != NULL){
            R = next(R);
        }
        next(R) = P;
    }
    cout << "Data Berhasil ditambahkan" << endl;
}
void deleteFirstChild(list_child &L, adr_Child &P){
    if (first(L) == NULL) {
        cout << "List Barang Kosong" << endl;
    } else if (next(first(L)) == NULL) {
        first(L) = NULL;
    } else {
        adr_Child P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}
void showAllChild(list_child L){
    adr_Child P = first(L);
    cout << "====List Barang====" << endl;
    cout << " " << endl;
    while (P != NULL){
        cout << "ID Barang : " << info(P).idBarang << endl;
        cout << "Nama Barang : " << info(P).namaBarang << endl;
        cout << "Harga : " << info(P).harga << endl;
        P = next(P);
    }
    cout << endl << endl;
}
adr_Child cariDataChild(list_child L, int id){
    adr_Child P = first(L);
    while (P != NULL){
        if (info(P).idBarang == id){
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void printMinimumHarga(list_child L, int harga){
    adr_Child P = first(L);
    cout << "====List Barang Diatas Harga " << harga << "===="<< endl;
    cout << " " << endl;
    while (P != NULL){
        if (info(P).harga >= harga){
            cout << "ID Barang : " << info(P).idBarang << endl;
            cout << "Nama Barang : " << info(P).namaBarang << endl;
            cout << "Harga : " << info(P).harga << endl;
        }
        cout << endl;
        P = next(P);
    }
    cout << endl;

}
