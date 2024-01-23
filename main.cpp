#include <iostream>
#include "barang.h"
#include "pelanggan.h"
using namespace std;

int main()
{
    list_parent L1;
    list_child L2;

    infoParent pel;
    infoChild bar;

    adr_Child C;
    adr_Parent P;
    adr_Relation R;

    int idPel, idBrg, setMinimum;
    createList(L1);
    createList(L2);

//    INPUT PARENT
    cout << "INPUT DATA PELANGGAN" << endl;
    cout << endl;
    cout << "ID PELANGGAN : " << endl;
    cin >> pel.idPelanggan;
    cout << "NAMA PELANGGAN : " << endl;
    cin >> pel.name;
    cout << "ALAMAT PELANGGAN : " << endl;
    cin >> pel.address;
    P = createElmParent(pel);
    insertLastParent(L1, P);
    showAllParent(L1);

    cout << "INPUT DATA PELANGGAN" << endl;
    cout << endl;
    cout << "ID PELANGGAN : " << endl;
    cin >> pel.idPelanggan;
    cout << "NAMA PELANGGAN : " << endl;
    cin >> pel.name;
    cout << "ALAMAT PELANGGAN : " << endl;
    cin >> pel.address;
    P = createElmParent(pel);
    insertLastParent(L1, P);
    showAllParent(L1);

//   CARI DATA PARENT
    cout << "CARI DATA PARENT" <<  endl;
    cout << "MASUKKAN ID YANG INGIN DICARI :" << endl;
    cin >> idPel;
    P = cariDataParent(L1,idPel);
    cout << "ID PELANGGAN : " <<info(P).idPelanggan << endl;
    cout << "NAMA PELANGGAN : " <<info(P).name << endl;
    cout << "ALAMAT PELANGGAN : "<<info(P).address << endl;
    cout << "" << endl;

//  INPUT CHILD
    cout << "INPUT DATA BARANG" << endl;
    cout << endl;
    cout << "ID BARANG : " << endl;
    cin >> bar.idBarang;
    cout << "NAMA BARANG : " << endl;
    cin >> bar.namaBarang;
    cout << "HARGA BARANG : " << endl;
    cin >> bar.harga;
    C = createElmChild(bar);
    insertLastChild(L2, C);
    showAllChild(L2);


    cout << "INPUT DATA BARANG" << endl;
    cout << endl;
    cout << "ID BARANG : " << endl;
    cin >> bar.idBarang;
    cout << "NAMA BARANG : " << endl;
    cin >> bar.namaBarang;
    cout << "HARGA BARANG : " << endl;
    cin >> bar.harga;
    C = createElmChild(bar);
    insertLastChild(L2, C);
    showAllChild(L2);


    cout << "INPUT DATA BARANG" << endl;
    cout << endl;
    cout << "ID BARANG : " << endl;
    cin >> bar.idBarang;
    cout << "NAMA BARANG : " << endl;
    cin >> bar.namaBarang;
    cout << "HARGA BARANG : " << endl;
    cin >> bar.harga;
    C = createElmChild(bar);
    insertLastChild(L2, C);
    showAllChild(L2);

//  PRINT MINIMUM HARGA
    cout << "MASUKKAN MINIMUM HARGA BARANG YANG INGIN DITAMPILKAN : " << endl;
    cin >> setMinimum;
    cout << "DATA BARANG DENGAN MINIMAL HARGA " << setMinimum << endl;
    printMinimumHarga(L2,setMinimum);

//  CONNECT CHILD TO PARENT
    cout << "" << endl;
    cout << "Connect Child To Parent" << endl;
    cout << "ID PELANGGAN : " << endl;
    cin >> idPel;
    cout << "ID BARANG : " << endl;
    cin >> idBrg;

    P = cariDataParent(L1,idPel);
    C = cariDataChild(L2,idBrg);
    R = createElmRelation(C);
    inserLastRelation(child(P),R);
    showAllParentwithChild(L1);

    cout << "" << endl;
    cout << "Connect Child To Parent" << endl;
    cout << "ID PELANGGAN : " << endl;
    cin >> idPel;
    cout << "ID BARANG : " << endl;
    cin >> idBrg;

    P = cariDataParent(L1,idPel);
    C = cariDataChild(L2,idBrg);
    R = createElmRelation(C);
    inserLastRelation(child(P),R);
    showAllParentwithChild(L1);

//  HAPUS CHILD PADA PARENT
    cout << "" << endl;
    cout << "Disconnect Child From Parent" << endl;
    cout << "ID PELANGGAN : " << endl;
    cin >> idPel;
    cout << "ID BARANG : " << endl;
    cin >> idBrg;
    P = cariDataParent(L1,idPel);
    C = cariDataChild(L2,idBrg);
    R = createElmRelation(C);
    deleteFirst(child(P),R);
    showAllParentwithChild(L1);

//  DELETE DATA PARENT
    cout << "" << endl;
    cout << "DELETE DATA PARENT" << endl;
   deleteFirstParent(L1,P);
   showAllParentwithChild(L1);

    return 0;

}
