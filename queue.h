#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include "stack.h"

class Queue
{
public:
    void push(int room_no1,
              string name1,
              string address1,
              string phone1);
    void pop();
    void display();
    int size;
    LinkList ll;       // composition, here we are using LinkedList class
    int count;
};


#endif // QUEUE_H_INCLUDED
