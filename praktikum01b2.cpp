#include <iostream>
using namespace std;

void cari(int x, int n)
{
    static int i;
    if (n == 0)
        cout << "Bilangan tidak ditemukan\n";
    else if (x == n)
        cout << "Bilangan ditemukan setelah perulangan ke \n"
             << i;
    else
    {
        i++;
        cari(x, n - 1);
    }
}
int main(int argc, char *argv[])
{
    cari(14, 9);
    system("PAUSE");
    return 0;
}
