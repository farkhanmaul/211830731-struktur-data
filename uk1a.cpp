#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
 
struct TNode{
    int data;
    TNode *next;
};
char ulang;
int pil;
TNode *head, *tail;

void init (){
    head = NULL;
    tail = NULL;
}
 
int isEmpty(){
    if(tail==NULL)return 1;
    else return 0;
}
 
void insertDepan(int databaru)
{
    TNode *baru;
    baru = new TNode;
    baru->data = databaru;
    baru->next = NULL;
    if(isEmpty()==1)
    {
        head=tail=baru;
        tail->next=NULL;
    }else
    {
        baru->next = head;
        head=baru;
    }
    cout<<"Data Telah Masuk\n";
}
 
void sisipkan(){
    TNode *baru;
    baru = new TNode;
    baru->next = head->next;
    head->next = baru;
    if(isEmpty()==1)
    {
        head=tail=baru;
        tail->next=NULL;
    }else
    {
        baru->next = head;
        head=baru;
    }
    cout<<"Data Telah Masuk\n";
}
 
 
 
void tampil(){
    TNode *bantu;
    bantu=head;
        if(isEmpty()==0)
        {
            while(bantu!=NULL)
            {
                cout<<bantu->data<<" ";
                bantu=bantu->next;
            }
        }else cout <<"Masih kosong\n";
}
 
void hapusDepan(){
    TNode *hapus;
    int d;
    if (isEmpty()==0)
    {
        if(head!=tail)
        {
            hapus=head;
            d=hapus->data;
            head=head->next;
            delete hapus;
        }else
        {
            d=tail->data;
            head=tail=NULL;
        }
    cout<<"Data : "<<d<<" terhapus";
    }else cout<<"Masih kosong\n";
}
 
void hapusBelakang(){
TNode*hapus,*bantu;
int d;
if (isEmpty()==0){
    if (head->next != NULL){
        bantu=head;
        while(bantu->next->next !=NULL){
            bantu=bantu->next;
        }
        hapus=bantu->next;
        d=hapus->data;
            bantu->next=NULL;
        delete hapus;
    }else{
        d=head->data;
        head=tail=NULL;
    }
    cout<<"Data : "<<d<<" Terhapus\n";
    }else cout<<"Masih kosong\n";
}
 
void clear()
{
    TNode *bantu, *hapus;
    bantu =head;
    while(bantu!=NULL)
    {
        hapus=bantu;
        bantu=bantu->next;
        delete hapus;
    }
    head = NULL;
    printf("clear");
}
 
void penghapusan(){
system("cls");
        cout<<endl;
        cout<<" ==========================="<<endl;
        cout<<" = Menghapus Data Tertentu ="<<endl;
        cout<<" ============================"<<endl;
        cout<<" = 1. Hapus Depan          ="<<endl;
        cout<<" = 2. Hapus Belakang       ="<<endl;
        cout<<" Masukan Pilihan : ";cin>>pil;
        switch (pil)
        {
            case 1: system("cls");{
                hapusDepan();
                break;
            }
            case 2: system("cls");{
                hapusBelakang();
                break;
            }
}
}
 
main(){
    int databaru;
    do{
        system("cls");
        cout<<endl;
        cout<<" =============================="<<endl;
        cout<<" =    PROGRAM LINKED LIST     ="<<endl;
        cout<<" =============================="<<endl;
        cout<<" = 1. Insert Depan            ="<<endl;
        cout<<" = 2. Menghapus Data Tertentu ="<<endl;
        cout<<" = 3. Tampil Data             ="<<endl;
        cout<<" = 4. Clear Semua Data        ="<<endl;
        cout<<" = 5. Sisipkan Data           ="<<endl;
        cout<<" = 5. Exit                    ="<<endl;
        cout<<" =============================="<<endl;
        cout<<" Masukan Pilihan : ";cin>>pil;
        switch (pil){
            case 1: system("cls");{
                cout<<"Masukan Data = ";cin>>databaru;
                insertDepan(databaru);
                break;
            }
            case 2: system("cls");{
                penghapusan();
                break;
            }
            case 3: system("cls");{
                tampil();
                break;
            }
            case 4: system("cls");{
                clear();
                break;
            }
            case 5: system("cls");{
                sisipkan();
                break;
            }
            case 6: system("cls");{
                return 0;
                break;
            }
            default : system("cls");
            {
                cout<<"\n Maaf, Pilihan yang anda pilih tidak tersedia!";
            }
        }
        cout<<endl;
        cout<<"\nKembali Ke Menu Utama Y/T : ";cin>>ulang;
    }
    while ((ulang=='Y')||(ulang=='y'));
}
