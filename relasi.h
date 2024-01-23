#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED

#include <iostream>
#include "relasi.h"
#include "barang.h"


using namespace std;

#define next(P) (P)->next
#define first(L) ((L).first)
#define info(P) (P)->info


typedef struct elm_Relation *adr_Relation;

struct elm_Relation{
    adr_Relation next;
    adr_Child info;
};

struct list_Relation{
    adr_Relation first;
};

void createList(list_Relation &L);
void inserLastRelation(list_Relation &L, adr_Relation P);
void deleteFirst(list_Relation &L, adr_Relation &P);
void deleteLast(list_Relation &L, adr_Relation &P);


adr_Relation createElmRelation(adr_Child C);
adr_Relation findElm(list_Relation L, adr_Child C);
void dealokasiRelasi(adr_Relation &P);

void printRelasi(list_Relation L);

#endif // RELASI_H_INCLUDED
