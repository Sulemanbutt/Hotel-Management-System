#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED


#include "LL.h"

class Stack
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


#endif // STACK_H_INCLUDED
