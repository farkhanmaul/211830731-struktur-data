#include <iostream>
#include <conio.h>
using namespace std;
struct wilayah
{
    char desa[20];
    char kec[20];
    char kel[20];
};
struct ktp
{
    char nama[20];
    char alamat[20];
    char tgl[20];
    int umur;
    wilayah lokasi;
};
int main(int argc, char **argv)
{
    ktp dataku; //2 user saja
    for (int n = 0; n < 2; n++)
    {
        //input data ktp
        cout << "\nUser ke-" << n + 1;
        cout << "\n";
        cout << "\nMasukkan nama=";
        cin >> dataku.nama;
        //supaya data bisa masuk dengan sempurna
        fflush(stdin);
        cout << "\nMasukkan alamat=";
        cin >> dataku.alamat;
        fflush(stdin);
        cout << "\nMasukkan tgl lahir=";
        cin >> dataku.tgl;
        cout << "\nMasukkan umur=";
        cin >> dataku.umur;
        cout << "\nMasukkan desa=";
        cin >> dataku.lokasi.desa;
        fflush(stdin);
        cout << "\nMasukkan kecamatan=";
        cin >> dataku.lokasi.kec;
        fflush(stdin);
        cout << "\nMasukkan kelurahan=";
        cin >> dataku.lokasi.kel;
        //output data
        cout << "\nNama=" << dataku.nama;
        cout << "\nAlamat=" << dataku.alamat;
        cout << "\nTgl lahir=" << dataku.tgl;
        cout << "\nUmur=" << dataku.umur;
        cout << "\nDesa=" << dataku.lokasi.desa;
        cout << "\nKecamatan=" << dataku.lokasi.kec;
        cout << "\nKelurahan=" << dataku.lokasi.kel;
        // otomatis memberi enter
        getch();
    }
}
