#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int i, a, jml = 0;
	char bil[5];
	cout<< "======================\n";
    cout<< "Program Pembalik Angka\n";
    cout<< "======================\n";
    cout<< "\nMasukan bilangan = ";
    gets (bil);  
    jml = strlen(bil);
    cout<< "\nMaka hasilnya adalah = ";
    for (i = jml; i >= 0; i--) {
        cout << bil[i];
    }
}
