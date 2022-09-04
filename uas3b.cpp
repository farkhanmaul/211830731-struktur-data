#include<bits/stdc++.h>
using namespace std;

void hapus(stack<char> &array, int n,int curr=0){
   if (array.empty() || curr == n)
		return;

   char x = array.top();
   array.pop();

   hapus(array, n, curr+1);
   hapus(array, n, curr+2);


   if (curr != n/2)
     array.push(x);
}

int main(){
    stack<char> array;

    array.push('A');
    array.push('D');
    array.push('C');
    array.push('D');
    array.push('E');

 	cout << "Sebelum" << endl;
    cout <<"A"<<" "<<"B"<<" "<<"C"<<" "<<"D"<<" "<<"E"<<endl;
    cout << "Sesudah" << endl;
    hapus(array, array.size());

    while (!array.empty()){
        char p=array.top();
        array.pop();
        cout << p << " ";
    }
    return 0;
}
