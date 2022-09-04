#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};
class Double{
    public:
        Double();
        void Awal(int fn);
        void Akhir(int fn);
        void Tengah(int fn);
        void hasil();
    private:
        Node *first;
        Node *End;
};
Double::Double(){
    first = NULL;
    End = first;
}
void Double::Awal(int fn){
    Node *baru = new Node();
    baru->data = fn;
    if(first == NULL){
        first = baru;
        End = baru;
    }else{
        baru->next = first;
        first = baru;
    }
    baru->prev = NULL;
}
void Double::Akhir(int fn){
    Node *baru = new Node();
    baru->data = fn;
    End->next = baru;
    baru->prev = End;
    End = baru;
    baru->next = NULL;
}
void Double::hasil(){
    Node *p = first;
    cout<<"\n\n";
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p-> next;        
    }
}
void Double::Tengah(int fn){
    Node *p = new Node();
    p = first;
    while(p->next->data < fn){
        p = p->next;
    }
    Node *baru = new Node();
    baru->data = fn;
    baru->next = p->next;
    p->next = baru;
}
main(){
    Double sd;
    sd.Awal(3);
    sd.Awal(2);
    sd.Awal(1);
    sd.hasil();
    sd.Akhir(6);
    sd.Akhir(7);
    sd.Akhir(8);
    sd.hasil();
    sd.Tengah(4);
    sd.hasil();
}
