#include "queue.h"
#include<iostream>
using namespace std;

int countValue(Queue* qptr, int v){
    int counter=0;
    QueueItem *tmp=qptr->tail;
    while(true){
        if(qptr->tail==NULL) return 0;
        if(tmp->v==v){
            counter++;
        }
        tmp=tmp->next;
        if(tmp==qptr->tail) break;
    }
    
    return counter;
}
void testCountValue(){
    Queue q;
    
    q.push(5);
    q.push(90);
    q.push(30);
    q.push(30);
    q.push(40);
    q.push(90);
    q.push(40);
    q.push(5);
    q.push(20);
    q.push(890);
    q.push(90);
    q.pop();//removed the top element
    
    int counter_1=countValue(&q,890);
    int counter_2=countValue(&q,5);
    int counter_3=countValue(&q,90);
    int counter_4=countValue(&q,40);
    
    cout<<counter_1<<endl;
    cout<<counter_2<<endl;
    cout<<counter_3<<endl;
    cout<<counter_4<<endl;
}
int main(){
    testCountValue();
    return 0;
}
