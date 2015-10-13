#include <iostream>
#include "Queue.h"
using namespace std;

Queue::Queue(){
    rear = NULL;
    front = NULL;
}

void Queue::enqueue(){
    int data;
    node *temp = new node;
    cout<<"Enter the data to enqueue: ";
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
        cout<<"\nQueue is Emtpty\n";
    }else{
        temp = front;
        front = front->next;
        cout<<"The data Dequeued is "<<temp->info;
        delete temp;
    }
}

void Queue::display(){
    node *p = new node;
    p = front;
    if(front == NULL){
        cout<<"\nNothing to Display\n";
    }else{
        while(p!=NULL){
            cout<<endl<<p->info;
            p = p->next;
        }
    }
}
