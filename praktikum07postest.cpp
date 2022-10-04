#include <iostream>
using namespace std;
struct dlist{
    dlist *prev;
    int nip;
    string nama, ttl, jnsklmn, almt, rtrw, agama, status, pekerjaan, warga;
    dlist *next;
};
class data{
public:
    int dlinklist_counter = 0;
    void dlinklist_menambahkan();
    void dlinklist_memanggil();
    void dlinklist_hapus();
    void dlinklist_tampil();
    void dlinklist_front();
};
dlist *first, *current, *previos, *tamp;
void data::dlinklist_memanggil(){
dlinklist_start:
    int pilihan;
    do{
        system("cls");
        cout << "==========================================\n";
        cout << "|| 1. Menambah Data(Enqueu) ||\n";
        cout << "|| 2. Menghapus Data (Dequeu) ||\n";
        cout << "|| 3. Menampilkan Data ||\n";
        cout << "|| Pilih : ||\n";
        cout << "==========================================\n";
        cin >> pilihan;
        switch (pilihan){
        case 1:
            system("cls");
            dlinklist_menambahkan();
            break;
        case 2:
            system("cls");
            dlinklist_hapus();
            break;
        case 3:
            system("cls");
            dlinklist_tampil();
            break;
        default:
            system("cls");
            cout << "Pilihan Tidak Ada " << endl;
            break;
        }
    } while (pilihan != 4);
}
void data::dlinklist_menambahkan(){
    current = new dlist;
    if (dlinklist_counter == 0){
        previos = current;
        first = current;
        current->prev = NULL;
        previos->next = current;
        current->prev = previos;
        previos = current;
        cout << "Nomor induk\t\t: ";
        cin >> current->nip;
        cin.ignore();
        cout << "Nama\t\t\t: ";
        cin >> current->nama;
        cout << "Tempat tanggal lahir\t: ";
        cin >> current->ttl;
        cout << "Jenis kelamin\t\t: ";
        cin >> current->jnsklmn;
        cout << "Alamat\t\t\t: ";
        cin >> current->almt;
        cout << "rt/rw\t\t\t: ";
        cin >> current->rtrw;
        cout << "Agama\t\t\t: ";
        cin >> current->agama;
        cout << "Status perkawinan\t: ";
        cin >> current->status;
        cout << "Pekerjaan\t\t: ";
        cin >> current->pekerjaan;
        cout << "Kewarganegaraan\t\t: ";
        cin >> current->warga;
    }
    else{
        previos->next = current;
        current->prev = previos;
        previos = current;
        cout << "Nomor induk\t\t: ";
        cin >> current->nip;
        cin.ignore();
        cout << "Nama\t\t\t: ";
        cin >> current->nama;
        cout << "Tempat tanggal lahir\t: ";
        cin >> current->ttl;
        cout << "Jenis kelamin\t\t: ";
        cin >> current->jnsklmn;
        cout << "Alamat\t\t\t: ";
        cin >> current->almt;
        cout << "rt/rw\t\t\t: ";
        cin >> current->rtrw;
        cout << "Agama\t\t\t: ";
        cin >> current->agama;
        cout << "Status perkawinan\t: ";
        cin >> current->status;
        cout << "Pekerjaan\t\t: ";
        cin >> current->pekerjaan;
        cout << "Kewarganegaraan\t\t: ";
        cin >> current->warga;
    }
    current->next = NULL;
    dlinklist_counter++;
}
void data::dlinklist_hapus(){
    if (dlinklist_counter == 0){
        cout << " Queue Kosong";
        system("pause");
    }
    else{
        first = first->next;
        dlinklist_counter--;
    }
}
void data::dlinklist_tampil(){
    if (dlinklist_counter == 0){
        cout << " Queue Kosong";
    }
    else{
        tamp = first;
    }
    while (tamp->next != NULL){
        cout << "\t\t\t\tPROVINSI JAWA BARAT\n";
        cout << "\t\t\t\tKABUPATEN BEKASI\n";
        cout << "Nomor induk\t\t: " << tamp->nip << endl;
        cout << "Nama\t\t\t: " << tamp->nama << endl;
        cout << "Tempat tanggal lahir\t: " << tamp->ttl << endl;
        cout << "Jenis kelamin\t\t: " << tamp->jnsklmn << endl;
        cout << "Alamat\t\t\t: " << tamp->almt << endl;
        cout << "rt/rw\t\t\t: " << tamp->rtrw << endl;
        cout << "Agama\t\t\t: " << tamp->agama;
        cout << "Status perkawinan\t: " << tamp->status << endl;
        cout << "Pekerjaan\t\t: " << tamp->pekerjaan;
        cout << "Kewarganegaraan\t\t: " << tamp->warga << endl << endl;
        tamp = tamp->next;
    }
    cout << "\t\t\t\tPROVINSI JAWA BARAT\n";
    cout << "\t\t\t\tKABUPATEN BEKASI\n";
    cout << "Nomor induk\t\t: " << tamp->nip << endl;
    cout << "Nama\t\t\t: " << tamp->nama << endl;
    cout << "Tempat tanggal lahir\t: " << tamp->ttl << endl;
    cout << "Jenis kelamin\t\t: " << tamp->jnsklmn << endl;
    cout << "Alamat\t\t\t: " << tamp->almt << endl;
    cout << "rt/rw\t\t\t: " << tamp->rtrw << endl;
    cout << "Agama\t\t\t: " << tamp->agama << endl;
    cout << "Status perkawinan\t: " << tamp->status << endl;
    cout << "Pekerjaan\t\t: " << tamp->pekerjaan << endl;
    cout << "Kewarganegaraan\t\t: " << tamp->warga << endl << endl;
    cout << endl;
    system("pause");
}
void data::dlinklist_front(){
    if (dlinklist_counter == 0){
        cout << " Queue Kosong";
    }
    else{
        cout << "Nomor induk\t\t: " << first->nip << endl;
        cout << "Nama\t\t\t: " << first->nama << endl;
        cout << "Tempat tanggal lahir\t: " << first->ttl << endl;
        cout << "Jenis kelamin\t\t: " << first->jnsklmn << endl;
        cout << "Alamat\t\t\t: " << first->almt << endl;
        cout << "rt/rw\t\t\t: " << first->rtrw << endl;
        cout << "Agama\t\t\t: " << first->agama;
        cout << "Status perkawinan\t: " << first->status << endl;
        cout << "Pekerjaan\t\t: " << first->pekerjaan;
        cout << "Kewarganegaraan\t\t: " << first->warga << endl;
    }
    cout << endl;
    system("pause");
}
int main(){
    data dobel;
    system("cls");
    dobel.dlinklist_memanggil();
    return 0;
}
