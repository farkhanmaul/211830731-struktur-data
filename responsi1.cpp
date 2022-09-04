#include <iostream>
using namespace std;

class Stack{
    public:
        void insert(int a);
        bool isFull();
        bool isEmpty(int a){
            if(a==0)return true;
            else return false;
        }
        void bagiData();
        void show();
        void showAll();
    private:
        int x=0;
        int j=0;
        int jumlah = 0;
        int data[10];
        int dataB[5];
        int dataC[5];
};

bool Stack::isFull(){
    if(jumlah==10)return true;
    else return false;
}

void Stack::showAll(){
    if(isEmpty(jumlah)){
        cout<<"Data 1 Kosong"<<endl;
    }else{
        cout<<"Stack 1 : "<<endl;
        for(int i=0; i<=jumlah; i++){
            cout<<i+1<<". "<<data[i]<<endl;
        }
        bagiData();
        cout<<"\n\nHasil Bagi : "<<endl;
        if(isEmpty(x)){
            cout<<"Data 2 Kosong"<<endl;
        }else{
            cout<<"Stack 2 : "<<endl;
            for(int i=0; i<=x; i++){
                cout<<i+1<<". "<<dataB[i]<<endl;
            }
        }
        if(isEmpty(j)){
            cout<<"Data 3 Kosong"<<endl;
        }else{
            cout<<"Stack 3 : "<<endl;
            for(int i=0; i<=j; i++){
                cout<<i+1<<". "<<dataC[i]<<endl;
            }
        }
        
    }
}

void Stack::bagiData(){
    if(isEmpty(jumlah))cout<<"Data Kosong"<<endl;
    else{
        for(int i=0; i<=jumlah; i++){
            if(data[i]%2==1){
                dataB[x] = data[i];
                data[i] = NULL;
                x++;
            }else{
                dataC[j] = data[i];
                data[i] = NULL;
                j++;
            }
        }
    }
}

void Stack::insert(int a){
    if(isFull()){
        cout<<"Penuh"<<endl;
    }else{
        data[jumlah] = a;
        jumlah++;
    }
}

main(){
    Stack tumpukan;
    int pilihan, angka;
    while(true){
        system("cls");
        cout<<"Insert data(1)"<<endl;
        cout<<"Tampil data(2)"<<endl;
        cout<<"Keluar(3)"<<endl;
        cout<<"pilihan :  ";
        cin>>pilihan;
        switch(pilihan){
            case 1 :
                cout<<"input angka : ";
                cin>>angka;
                tumpukan.insert(angka);
                break;
            case 2 :
                tumpukan.showAll();
                break;
            case 3 :
                exit(1);
                break;
            default:

                break;
        }
        system("pause");
    }
}
