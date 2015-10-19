#include <iostream>
using namespace std;

/* Fachrul Pralienka Bani Muhamad */
/*           5115201044           */

struct node{
    int info;
    struct node *next;
};

class Queue{
    private:
        node *rear;
        node *front;

    public:
        Queue();
        void enqueue();
        void dequeue();
        void display();
};
