#include <iostream>
#include "Queue.h"
using namespace std;

/* Fachrul Pralienka Bani Muhamad */
/*           5115201044           */

Queue::Queue(){
    rear = NULL;
    front = NULL;
}

void Queue::enqueue(){
    int data;
    node *temp = new node;    
    cout<<endl<<endl<<"Masukkan data untuk di-enqueue: ";
    cin>>data;
    temp->info = data;
    temp->next = NULL;
    if(front == NULL){
        front = temp;
    }else{
        rear->next = temp;
    }
    rear = temp;
}

void Queue::dequeue(){
    node *temp = new node;
    if(front == NULL){
        cout<<"\n\nMaaf, tidak dapat dequeue! Karene tidak ada queue saat ini!\n";
    }else{
        temp = front;
        front = front->next;
        cout<<endl<<endl<<"Data yang di-dequeue adalah "<<temp->info<<endl;
        delete temp;
    }
}

void Queue::display(){
    node *p = new node;
    p = front;
    if(front == NULL){
        cout<<"\n\nMaaf, saat ini tidak ada queue!\n";
    }else{
    	cout<<"\n\nData queue saat ini adalah: \n";
        while(p!=NULL){
            cout<<p->info<<" <- ";
            p = p->next;
        }
        cout<<endl;
    }
}
