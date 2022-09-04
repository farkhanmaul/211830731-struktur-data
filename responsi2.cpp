#include <iostream>
#include <conio.h>
using namespace std;

class linked_list_queue{
        private:
        struct node{
                int data;
            node *next;
        };
        node *rear;
        node *entry;
        node *print;
        node *front;

        public:
        linked_list_queue();
        void enqueue();
        void dequeue();
        void print_list();

};

linked_list_queue::linked_list_queue(){
    rear=NULL;
   front=NULL;
}

void linked_list_queue::enqueue(){
    int angka;
   cout<<"masukkan angka :";
   cin>>angka;
   entry=new node;
   if(rear==NULL){
          entry->data=angka;
          entry->next=NULL;
          rear=entry;
          front=rear;
   }
   else{
       entry->data=angka;
      entry->next=NULL;
      rear->next=entry;
      rear=entry;
   }
   cout<<endl;
   cout<<"data "<<angka<<" telah masuk";
   cout<<endl;
   getch();
}

void linked_list_queue::dequeue(){
    if(front==NULL){
       cout<<"queue kosong";cout<<endl;
   }
   else{
       int deleted_element=front->data;
      node *temp;
      temp=front;
      front=front->next;
      delete temp;
      cout<<deleted_element<<" telah dihapus";
      cout<<endl;
    }
    getch();
}

void linked_list_queue::print_list(){
    print=front;
    if(print!=NULL){
         cout<<"angka dalam queue : ";
    }
    else{
        cout<<"queue kosong";cout<<endl;
    }
    while(print!=NULL){
          cout<<print->data;
          print=print->next;
    }
   getch();
}

int main(){
    int pilih;
   linked_list_queue queue;
   do{
   cout<<"Enqueue data(1)"<<endl;
   cout<<"Dequeue data(2)"<<endl;
   cout<<"Tampilkan data(3)"<<endl;
   cout<<"masukkan pilihan:";
   cin>>pilih;
   cout<<endl;
   if(pilih==1){
            queue.enqueue();
   }
   if(pilih==2){
            queue.dequeue();
   }
   if(pilih==3){
            queue.print_list();
   }
    }
    while(pilih!=0||pilih>3);
  getch();

}
