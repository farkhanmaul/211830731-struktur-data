#include <iostream>
#include <cstdlib>
#include <iomanip>
#define maks 5
using namespace std;

typedef struct{
    string nik;
    int ttl, alamat, terhapus;
    char nama[50], gen, kerja[50], statka[10], warga[10], agama[10];
	} 
	ktp_penduduk;
	ktp_penduduk penduduk[maks];
typedef struct{
    char tempat[100], bulan[10];
    int tgl, tahun;
	} 
	pend_ttl;
	pend_ttl ttl[maks];
typedef struct{
    int rt, rw, kodepos;
    char desa_kel[50], kota[50], kecamatan[50], dusun[50];
	} 
	pend_alamat;
	pend_alamat alamat[maks];

class KTP{
    friend ostream &operator<<(ostream &, const KTP &);
    friend istream &operator>>(istream &, KTP &);
	public:
	    void proses();
	private:
	    int i, g, cari, ketemu, pilih;
	    char jawab;
	};
void KTP::proses(){
	awal:
	    system("cls");
	    cout << "Selamat Datang Di Program Data Kependudukan\n" ;
	    cout << "1. Memasukkan Data " << endl;
	    cout << "2. Daftar Data Penduduk \n";
	    cout << "Masukkan pilihan anda = ";
	    cin >> pilih;
	    cout << endl;
	    switch (pilih){
	    case 1:
	        cout << "Masukkan jumlah data yang akan di inputkan: ";
	        cin >> g;
	        cout << endl;
	        system("cls");
	        cout << "\t\t\t---Kartu Tanda Penduduk---\n";
	        for (i = 0; i < g; i++){
	            cout << "NIK\t\t\t: ";
	            cin >> penduduk[i].nik;
	            cout << "Nama\t\t\t: ";
	            fflush(stdin);
	            cin.get(penduduk[i].nama, 30);
	            cout << "Tempat/TGL Lahir\t: ";
	            fflush(stdin);
	            cin.get(ttl[i].tempat, 100);
	            cout << "Jenis Kelamin(L/P)\t: ";
	            cin >> penduduk[i].gen;
	            cout << "Alamat \t\t\t:";
	            cin >> alamat[i].dusun, 50;
	            cout << endl;
	            cout << "\tRT\t\t: ";
	            cin >> alamat[i].rt;
	            cout << "\tRW\t\t: ";
	            cin >> alamat[i].rw;
	            cout << "\tKel/Desa\t: ";
	            fflush(stdin);
	            cin.get(alamat[i].desa_kel, 20);
	            cout << "\tKecamatan\t: ";
	            fflush(stdin);
	            cin.get(alamat[i].kecamatan, 20);
	            cout << "\tKota\t\t: ";
	            fflush(stdin);
	            cin.get(alamat[i].kota, 20);
	            cout << "\tKode Pos\t: ";
	            cin >> alamat[i].kodepos;
	            cout << "Agama\t\t\t: ";
	            fflush(stdin);
	            cin.get(penduduk[i].agama, 10);
	            cout << "Status(kawin/belum)\t: ";
	            fflush(stdin);
	            cin.get(penduduk[i].statka, 10);
	            cout << "Pekerjaan\t\t: ";
	            fflush(stdin);
	            cin.get(penduduk[i].kerja, 21);
	            cout << "Kewarganegaraan\t\t: ";
	            fflush(stdin);
	            cin.get(penduduk[i].warga, 10);
	            cout << endl << endl;
	            penduduk[i].terhapus = 0;
	        }
	        break;
	    case 2:
	        cout << endl;
	        cout << "Data yang Terlihat\n\n\n";
	        for (i = 0; i < g; i++){
	            if (penduduk[i].terhapus == 0)
	            cout << "=========================" << endl;
	            cout << " KARTU TANDA PENDUDUK\n\n";
	            cout << "=========================" << endl;
	            cout << "\nNIK\t\t\t: " << penduduk[i].nik << endl;
	            cout << "Nama\t\t\t: " << penduduk[i].nama << endl;
	            cout << "Tempat/TGL Lahir\t: " << ttl[i].tempat << endl;
	            cout << "Jenis Kelamin\t\t: " << penduduk[i].gen << endl;
	            cout << "Alamat\t\t:" << alamat[i].dusun << endl;
	            cout << "\tRT\t\t: " << alamat[i].rt << endl;
	            cout << "\tRW\t\t: " << alamat[i].rw << endl;
	            cout << "\tDesa/Kel\t: " << alamat[i].desa_kel << endl;
	            cout << "\tKecamatan\t: " << alamat[i].kecamatan << endl;
	            cout << "\tKota\t\t: " << alamat[i].kota << endl;
	            cout << "\tKode pos\t: " << alamat[i].kodepos << endl;
	            cout << "Agama\t\t\t: " << penduduk[i].agama << endl;
	            cout << "Status kawin\t\t: " << penduduk[i].statka << endl;
	            cout << "Pekerjaan\t\t: " << penduduk[i].kerja << endl;
	            cout << "Kewarganegaraan\t\t: " << penduduk[i].warga << endl;
	            cout << "Berlaku hingga\t\t: SEUMUR HIDUP\n" << endl;
	        }
	        break;
	    default:
	        cout << "Error! \n";
	    }
	    cout << "Apakah Ingin Melanjutkan? (Y/T) : ";
	    cin >> jawab;
	    if ((jawab == 'Y') || (jawab == 'y'))
	        goto awal;
	    system("PAUSE");
	}
int main(){
    KTP Warga;
    Warga.proses();
	}
