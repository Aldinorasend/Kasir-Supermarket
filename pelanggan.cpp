#include "pelanggan.h"


void createList(list_parent &L){
     first(L) = NULL;
}
adr_Parent createElmParent(infoParent x){
    adr_Parent P = new elm_Parent;
    info(P).idPelanggan = x.idPelanggan;
    info(P).name = x.name;
    info(P).address = x.address;
    createList(child(P));
    next(P) = NULL;
    return P;
}
void insertLastParent(list_parent &L, adr_Parent P){
    if (first(L) == NULL){
        first(L) = P;
    }else{
        adr_Parent R = first(L);
        while(next(R) != NULL){
            R = next(R);
        }
        next(R) = P;
    }
    cout << "Data Berhasil ditambahkan" << endl;
}
void deleteFirstParent(list_parent &L, adr_Parent &P){
    if (first(L) == NULL) {
        cout << "List Pelanggan Kosong" << endl;
    } else if (next(first(L)) == NULL) {
        first(L) = NULL;
    } else {
        adr_Parent P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}
void showAllParent(list_parent L){
    adr_Parent P = first(L);
    cout << "====List Pelanggan=====" << endl;
    cout << " " << endl;
    while (P != NULL){
      cout << "ID Pelanggan : " << info(P).idPelanggan << endl;
       cout << "Nama Pelanggan : " << info(P).name << endl;
       cout << "Alamat Pelanggan : " << info(P).address << endl;
       cout << endl;
       P = next(P);
    }

}

void showAllParentwithChild(list_parent L){
    adr_Parent P = first(L);
    cout << "====List Pelanggan dengan Belanjaan=====" << endl;
    while (P != NULL){
       cout << "ID Pelanggan : " << info(P).idPelanggan << endl;
       cout << "Nama Pelanggan : " << info(P).name << endl;
       cout << "Alamat Pelanggan : " << info(P).address << endl;
       printRelasi(child(P));
       P = next(P);
    }

}
adr_Parent cariDataParent(list_parent L, int id){
    adr_Parent P = first(L);
    while (P != NULL){
        if (info(P).idPelanggan == id){
            return P;
        }
        P = next(P);
    }
    return NULL;
}
