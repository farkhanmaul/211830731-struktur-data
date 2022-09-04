#include <bits/stdc++.h>
using namespace std;

stack<char> array;
string ns;

void insert_at_bottom(char x){
    if (array.size() == 0)
        array.push(x);

    else{
        char a = array.top();
        array.pop();
        insert_at_bottom(x);
        array.push(a);
    }
}
void reverse(){
    if (array.size() > 0){
        char x = array.top();
        array.pop();
        reverse();
        insert_at_bottom(x);
    }
}

int main(){
    array.push('A');
    array.push('B');
    array.push('C');
    array.push('D');
    array.push('E');
    cout << "Sebelum" << endl;
    cout <<"A"<<" "<<"B"<<" "<<"C"<<" "<<"D"<<" "<<"E"<<endl;
    reverse();
    cout << "Sesudah" << endl;
    while (!array.empty()){
        char p = array.top();
        array.pop();
        ns += p;
    }
    cout << ns[4] << " " << ns[3] << " " << ns[2] << " " << ns[1] << " " << ns[0] << endl;
    return 0;
}

