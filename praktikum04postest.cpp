#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

class ktp{
private:
    struct node{
        int nik;
        int tgl;
        int tahun;
        int rt;
        int rw;
        int kodepos;
        char nama[50];
        char ttl[50];
        char gen[50];
        char gol[10];
        char alamat[50];
        char kerja[50];
        char agama[10];
        char status[10];
        char warga[10];
        char desa_kel[50];
        char kec[50];
        node *prev, *next;
    };
    node *depan, *head = NULL, *tail = NULL, *hapus, *keluaran;
public:
    void tambahdepan();
    void hapusdepan();
    void linkedlist();
    void hasillinkedlist();
};

void ktp::linkedlist(){
    depan = new (node);
    cout << endl;
    cout << "\t\tINPUT DATA PENDUDUK\n"<< endl;
    cout << "NIK\t\t\t: ";
    cin >> depan->nik;
    cout << "Nama\t\t\t: ";
    fflush(stdin);
    cin.get(depan->nama, 50);
    cout << "Tempat/Tgl Lahir\t: ";
    fflush(stdin);
    cin.get(depan->ttl, 50);
    cout << "Jenis Kelamin\t\t: ";
    fflush(stdin);
    cin.get(depan->gen, 50);
    cout << "Gol. Darah\t\t: ";
    cin >> depan->gol;
    cout << "Alamat\t\t\t: ";
    fflush(stdin);
    cin.get(depan->alamat, 50);
    cout << "\tRT\t\t: ";
    cin >> depan->rt;
    cout << "\tRW\t\t: ";
    cin >> depan->rw;
    cout << "\tKel/Desa\t: ";
    fflush(stdin);
    cin.get(depan->desa_kel, 50);
    cout << "\tKecamatan\t: ";
    fflush(stdin);
    cin.get(depan->kec, 50);
    cout << "\tKode pos\t: ";
    cin >> depan->kodepos;
    cout << "Agama\t\t\t: ";
    cin >> depan->agama;
    cout << "Status\t\t\t: ";
    fflush(stdin);
    cin.get(depan->status, 50);
    cout << "Pekerjaan\t\t: ";
    fflush(stdin);
    cin.get(depan->kerja, 50);
    cout << "Kewarganegaraan\t\t: ";
    cin >> depan->warga;
    cout << endl << endl;
    depan->prev = NULL;
    depan->next = NULL;
}
void ktp::tambahdepan(){
    cout << endl;
    cout << "\t\tMENAMBAH DATA DIdepan" << endl;
    cout << "\t\t=======================" << endl;
    linkedlist();
    if (head == NULL){
        head = depan;
        tail = depan;
    }
    else{
        depan->next = head;
        head->prev = depan;
        head = depan;
    }
    cout << endl << endl;
    system("cls");
    hasillinkedlist();
}
void ktp::hapusdepan(){
    if (head == NULL)
    cout << "Data Berhasil Dihapus" << endl;
    else if (head->next == NULL){
        hapus = head;
        head = NULL;
        tail = NULL;
        delete hapus;
    }
    else{
        hapus = head;
        head = hapus->next;
        head->prev = NULL;
        delete hapus;
    }
    cout << endl << endl;
    hasillinkedlist();
}
void ktp::hasillinkedlist(){
    if (head == NULL)
    cout << "No Data";
    else{
        keluaran = head;
        while (keluaran != NULL){
            cout << endl;
            cout << "=============================================================================== "<<endl;
            cout << endl;
            cout << "\t\t\t\tKARTU TANDA PENDUDUK" << endl << endl;
            cout << "\t\t\t\tPROVINSI JAWA TENGAH" << endl;
            cout << "\t\t\t\tKABUPATEN WONOGIRI" << endl;
            cout << "=============================================================================== "<<endl;
            cout << "NIK\t\t\t: " << keluaran->nik << endl;
            cout << "Nama\t\t\t: " << keluaran->nama << endl;
            cout << "Tempat Tanggal Lahir\t: " << keluaran->ttl << endl;
            cout << "Jenis Kelamin(L/P)\t: " << keluaran->gen << "\t\t\t" << "Gol.Darah\t: " << keluaran -> gol << endl;
            cout << "Alamat\t\t\t: " << keluaran->alamat << endl;
            cout << "\tRT\t\t: " << keluaran->rt << endl;
            cout << "\tRW\t\t: " << keluaran->rw << endl;
            cout << "\tKel/Desa\t: " << keluaran->desa_kel << endl;
            cout << "\tKecamatan\t: " << keluaran->kec << endl;
            cout << "\tKode pos\t: " << keluaran->kodepos << endl;
            cout << "Agama\t\t\t: " << keluaran->agama << endl;
            cout << "Status\t\t\t: " << keluaran->status << endl;
            cout << "Pekerjaan\t\t: " << keluaran->kerja << endl;
            cout << "Kewarganegaraan\t\t: " << keluaran->warga << endl;
            cout << "Berlaku hingga\t\t: SEUMUR HIDUP" << endl;
            cout << endl << endl;
            cout << "================================================================================= "<<endl;
            keluaran = keluaran->next;
        }
        getch();
    }
}
int main(){
    int pilih;
    char jawab;
    ktp x;
awal:
    system("cls");
    cout << "||=====================================================\t||" << endl;
    cout << "|| PROGRAM KARTU TANDA PENDUDUK LINKED LIST \t\t||" << endl;
    cout << "|| 1. Menambah data didepan \t\t\t\t||" << endl;
    cout << "|| 2. Menghapus data didepan \t\t\t\t||" << endl;
    cout << "|| 3. Melihat Data Penduduk \t\t\t\t||" << endl;
    cout << "||=====================================================\t||" << endl;
    cout << "\n";
    cout << "Masukkan pilihan anda : ";
    cin >> pilih;
    system("cls");
    cout << endl;
    switch (pilih){
    case 1:
        x.tambahdepan();
        break;
    case 2:
        x.hapusdepan();
        break;
    case 3:
        x.hasillinkedlist();
        break;
    default:
        cout << "Tidak Ada hasil\n";
    }
    cout << "\nSelanjutnya? (Y/T) : ";
    cin >> jawab;
    if ((jawab == 'Y') || (jawab == 'y'))
        goto awal;
    system("cls");
    system("PAUSE");
    return 0;
}
