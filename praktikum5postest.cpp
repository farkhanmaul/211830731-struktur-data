#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
using namespace std;

struct Node{
    string nama, ttl, rt_rw, jk, alamat, kecamatan, desa, agama, pekerjaan, kwg, sp;
    Node *next;
    Node *prev;
};

Node *head;
Node *tail;
Node *print;
Node *del;
Node *insert;

class Node1{
public:
    void inisialisasi(){
        head = NULL;
        tail = NULL;
    }
    int isEmpt(){
        if (head == NULL){
            return 1;
        }
        else{
            return 0;
        }
    }
    void input(string nama, string ttl, string jk, string alamat, string rt_rw, string kecamatan, string desa, string agama, string sp, string pekerjaan, string kwg){
        insert = new Node;
        insert->nama = nama;
        insert->ttl = ttl;
        insert->jk = jk;
        insert->alamat = alamat;
        insert->rt_rw = rt_rw;
        insert->kecamatan = kecamatan;
        insert->desa = desa;
        insert->agama = agama;
        insert->sp = sp;
        insert->pekerjaan = pekerjaan;
        insert->kwg = kwg;
        insert->next = NULL;
        insert->prev = NULL;
        if (isEmpt() == 1){
            head = insert;
            head->next = NULL;
            head->prev = NULL;
            tail = head;
        }
        else{
            tail->next = insert;
            insert->prev = tail;
            tail = insert;
        }
    }
    void hapus(){
        string name;
        if (head != NULL){
            if (head->next != NULL){
                del = head;
                name = head->nama;
                cout << "\n"
                     << name << "Telah dihapus" << endl;
                head = head->next;
                head->prev = NULL;
                delete del;
            }
            else{
                name = head->nama;
                cout << "\n"
                     << name << "Telah dihapus" << endl;
                head = NULL;
            }
        }
        else{
            cout << "\nLinked List kosong penghapusan tidak dapat dilakukan" << endl;
        }
    }
    void cetak(){
        print = head;
        if (head != NULL){
            while (print != NULL){
                while (print != NULL){
                    cout << "Nama : " << print->nama << endl;
                    cout << "Tempat Tanggal Lahir : " << print->ttl << endl;
                    cout << "Jenis Kelamin : " << print->jk << endl;
                    cout << "Alamat " << print->alamat << endl;
                    cout << "RT/RW : " << print->rt_rw << endl;
                    cout << "Kecamatan : " << print->kecamatan << endl;
                    cout << "Desa : " << print->desa << endl;
                    cout << "Agama : " << print->agama << endl;
                    cout << "Pekerjaan : " << print->pekerjaan << endl;
                    cout << "Kewarganegaraan : " << print->kwg << endl;
                    print = print->next;
                }
            }
        }
        else{
            cout << "DATA KOSONG" << endl;
        }
    }
    void menu(){
        char pilih, ulang;
        string nama, ttl, rt_rw, jk, alamat, kecamatan, desa, agama, pekerjaan, sp, kwg;
        do{
            system("cls");
        menu:
            cout << "||=====================================================\t||" << endl;
            cout << "|| \t\t PROGRAM CIRCULAR LINKED LIST \t\t||" << endl;
            cout << "|| 1. Menambah data didepan \t\t\t\t||" << endl;
            cout << "|| 2. Menghapus data didepan \t\t\t\t||" << endl;
            cout << "|| 3. Melihat Data Penduduk \t\t\t\t||" << endl;
            cout << "|| 4. Exit\t\t\t\t\t\t||" << endl;
            cout << "||=====================================================\t||" << endl;

            cin >> pilih;
            cin.ignore();
            switch (pilih){
            case '1':
                cout << "Masukkan Nama : ";
                getline(cin, nama);
                cout << "Masukkan Tempat, Tanggal Lahir : ";
                getline(cin, ttl);
                cout << "Masukkan Jenis Kelamin : ";
                getline(cin, jk);
                cout << "Masukkan Alamat : ";
                getline(cin, alamat);
                cout << "Masukkan RT/RW : ";
                getline(cin, rt_rw);
                cout << "Masukkan Kecamatan : ";
                getline(cin, kecamatan);
                cout << "Masukkan Desa : ";
                getline(cin, desa);
                cout << "Masukkan Agama : ";
                getline(cin, agama);
                cout << "Masukkan Status Perkawinan : ";
                getline(cin, sp);
                cout << "Masukkan Kewarganegaraan : ";
                getline(cin, kwg);
                input(nama, ttl, jk, alamat, rt_rw, kecamatan, desa, agama, sp, pekerjaan, kwg);
                cout << "\n"
                     << nama << "Telah Ditambahkan" << endl;
                break;
            case '2':
                hapus();
                break;
            case '3':
                cetak();
                break;
            case '4':
                cout << "---TERIMA KASIH---" << endl;
                break;
            default:
                cout << "Pilihan Anda Tidak Tersedia" << endl;
                goto menu;
            }
            cout << "Kembali Ke Menu? (y/n)";
            cin >> ulang;
        } while (ulang == 'y' || ulang == 'Y');
    }
};

int main(){
    Node1 *obj = new Node1();
    obj->inisialisasi();
    obj->menu();
}
