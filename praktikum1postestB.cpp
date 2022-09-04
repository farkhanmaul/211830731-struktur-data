#include <iostream>
#include <string.h>
using namespace std;

int i, a, jml = 0;
char bil[5];

void rekursif_angka_terbalik (char bil[]){
    cout<< "\nMaka hasilnya adalah = ";
    for (i = jml; i >= 0; i--) {
        cout << bil[i];
    }
}

int main (){
    cout<< "======================\n";
    cout<< "Program Pembalik Angka\n";
    cout<< "======================\n";
    cout<< "\nMasukan bilangan = ";
    gets (bil);  
    jml = strlen(bil);  
    rekursif_angka_terbalik (bil);
}
