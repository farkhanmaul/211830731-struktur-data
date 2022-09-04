#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
typedef struct node *simpul;

struct node{
  char Isi;
  simpul kanan;
};

void Sisip_Depan(simpul &CL, char elemen);
void Sisip_Belakang(simpul &CL, char elemen);
void Sisip_Tengah(simpul &CL, char elemen1, char elemen2);
void Hapus_Depan(simpul &CL);
void Hapus_Belakang(simpul &CL);
void Hapus_Tengah(simpul &CL, char elemen);
void Cetak(simpul CL);

main()
{
  char angka, angka2;
  simpul CL = NULL;
  int i;
  cout<<"===== OPERASI PADA SINGLE CIRCULAR LINKED LIST ======\n\n";
  cout<<"Penyisipan Simpul Di Depan\n";
  for(i=1; i<=4; i++)
  {
    cout<<"Masukkan angka : "; cin>>angka;
    Sisip_Depan(CL, angka);
  }
  Cetak(CL);
  cout<<"\n\nPenyisipan Simpul Di Belakang \n";
  for(i=1; i<=4; i++)
  {
    cout<<"Masukkan angka : "; cin>>angka;
    Sisip_Belakang(CL, angka);
  }
  Cetak(CL);
  cout<<"\nMasukkan angka\t\t: "; cin>>angka;
  cout<<"Disisip Setelah angka\t: "; cin>>angka2;
  cout<<angka<<" Disisip Setelah "<<angka2<<endl;
  Sisip_Tengah(CL, angka, angka2);
  Cetak(CL);
  getch;
}

void Sisip_Depan(simpul &CL, char elemen){
  simpul bantu, baru;
  baru = (simpul) malloc(sizeof(simpul));
  baru->Isi = elemen;
  baru->kanan = baru;
  if(CL == NULL)
    CL=baru;
  else{
    bantu = CL;
    while(bantu->kanan != CL) bantu=bantu->kanan;
    baru->kanan = CL;
    bantu->kanan = baru;
    CL = baru;
  }
}

void Sisip_Tengah(simpul &CL, char elemen1, char elemen2){
  simpul bantu, baru;
  baru = (simpul) malloc(sizeof(simpul));
  baru->Isi = elemen1;
  baru->kanan = baru;
  if(CL == NULL)
    cout<<"List Kosong .............."<<endl;
  else{
    bantu = CL;
    while(bantu->Isi != elemen2) bantu=bantu->kanan;
    baru->kanan = bantu->kanan;
    bantu->kanan = baru;
  }
}

void Sisip_Belakang(simpul &CL, char elemen){
  simpul bantu, baru;
  baru = (simpul) malloc(sizeof(simpul));
  baru->Isi = elemen;
  baru->kanan = baru;
  if(CL == NULL)
    CL=baru;
  else{
    bantu = CL;
    while(bantu != CL) bantu=bantu->kanan;
    baru->kanan = CL;
    bantu->kanan = baru;
  }
}

void Cetak(simpul CL){
  simpul bantu;
  if(CL==NULL)
    cout<<"Linked List Kosong ........"<<endl;
  else{
    bantu = CL;
    cout<<"Isi Linked List : ";
    while (bantu->kanan != CL){
      cout<<bantu->Isi<<"-->";
      bantu=bantu->kanan;
    }
    cout<<bantu->Isi;
  }
}

