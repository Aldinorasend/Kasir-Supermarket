#include "relasi.h"

void createList(list_Relation &L){
    first(L) = NULL;
}
adr_Relation createElmRelation(adr_Child C){
    adr_Relation P = new elm_Relation;
    info(P) = C;
    next(P) = NULL;
    return P;
}
void inserLastRelation(list_Relation &L, adr_Relation P){
    if (first(L) == NULL){
        first(L) = P;
    }else{
        adr_Relation R = first(L);
        while(next(R) != NULL){
            R = next(R);
        }
        next(R) = P;
    }
    cout << "Data Berhasil ditambahkan" << endl;
}

void deleteFirst(list_Relation &L, adr_Relation &P){
    if (first(L) == NULL) {
        cout << "List Keranjang Kosong" << endl;
    } else if (next(first(L)) == NULL) {
        first(L) = NULL;
    } else {
        adr_Relation P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}
void deleteAfter(list_Relation &L, adr_Relation &P, adr_Relation &prec){
    if (first(L) == NULL) {
        cout << "List Keranjang Kosong" << endl;
    } else {
        P = next(prec);
        next(prec) = next(P);
        next(P) = NULL;
    }
}
void deleteLast(list_Relation &L, adr_Relation &P){
  if (first(L) == NULL){
    cout << "List Keranjang Kosong" << endl;
  }else if (next(first(L)) == NULL){
    P = first(L);
    first(L) = NULL;
  }else{
    adr_Relation Q = first(L);
    while (next(next(Q)) != NULL){
        Q = next(Q);
    }
    P = next(Q);
    next(Q) = NULL;
  }
}



adr_Relation findElm(list_Relation L, adr_Child C){
    adr_Relation R = first(L);
    while(R != NULL){
        if (info(R) == C){
            return R;
        }
        R = next(R);
    }
    return NULL;
}



void printRelasi(list_Relation L){
    int i = 0;
    adr_Relation P = first(L);
    while (P != NULL){
        cout << "=====Keranjang=====" << endl;
        cout << "ID BARANG : " <<info(info(P)).idBarang << endl;
        cout << "NAMA BARANG : "<<info(info(P)).namaBarang << endl;
        cout << "HARGA BARANG : "<<info(info(P)).harga << endl;
        cout << "===================" << endl;
        P = next(P);
        i++;
    }
    cout << "Jumlah Barang yang dibeli : " << i << endl;
    cout << "===================" << endl;
}
