#include "stack.h"

void Stack :: push(int room_no1,
              string name1,
              string address1,
              string phone1)
{
    ll.insertAtHead(room_no1,
                    name1,
                    address1,
                    phone1);


    count++;
}

void Stack :: pop()
{
    ll.deleteAtHead();
    count--;
}

void Stack :: display()
{
    ll.print();
}
