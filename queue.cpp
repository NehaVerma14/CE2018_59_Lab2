#include "queue.h"
#include<iostream>
using namespace std;

Queue::Queue(){
    Front=-1;
	Rear=-1;
}
Queue::~Queue(){
}

bool Queue :: isEmpty(){
    if (Front < 0 && Rear < 0){
        cout << "queue is empty" << endl;
        return true;
    }
    else{
        return false;
    }
}

bool Queue :: isFull(){
    if(Rear >= MAX_QUEUE_SIZE-1){
        cout << "Queue is full" << endl;
        return true;
    }
    else{
        return false;
    }
}

void Queue :: enqueue(int ele){
    if(isFull()){
        cout << "Queue Overflow" << endl;
    }
    else{
        Rear++;
        data[Rear] = ele;
    }
}

int Queue :: dequeue(){
    if(isEmpty()){
        cout << "Queue Underflow, cannot dequeue!" << endl;
    }
    else{
        Front++;
        return data[Front];
    }
}

int Queue :: front(){
    if(isEmpty()){
        cout << "no data in the queue." << endl ;
        return 0;
    }
    else{
        return data[Front];
    }
}

int Queue :: rear(){
    if(isEmpty()){
        cout << "no data in the queue." << endl;
        return 0;
    }
    else{
        return data[Rear];
    }
}

int main(){
    Queue q;
    q.isFull();
    q.isEmpty();
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(2);
    q.front();
    cout << "rear element: " <<q.rear();
    cout << endl;
    cout << "dequeued elements are: " << q.dequeue();
    cout << " " << q.dequeue();
    cout << endl;
}
