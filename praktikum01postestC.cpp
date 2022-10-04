#include <iostream>
#include <conio.h>
using namespace std;

class pembalik{
	public:
	    int proses();
	    void tampil();
	private:
	    int x, hasil;
	};
	
int pembalik::proses(){
    cout<< "======================\n";
    cout<< "Program Pembalik Angka\n";
    cout<< "======================\n";
    cout << "\nMasukan bilangan = ";
    cin >> x;
    hasil = 0;
    for (int i = 0; i <= x; i++){
        hasil = (hasil * 10) + (x % 10);
        x /= 10;
    }
}

void pembalik::tampil(){
    cout << "Maka hasilnya adalah = " << hasil << endl;
}

int main(int argc, char **argv){
    pembalik bilangan;
    bilangan.proses();
    bilangan.tampil();
    return 0;
}
