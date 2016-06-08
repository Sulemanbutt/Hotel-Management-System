
#include <iostream>
#include "queue.h"

using namespace std;

void Queue :: push(int room_no1,
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

void Queue :: pop()
{
    ll.deleteAtTail();
    count--;
}

void Queue :: display()
{
    ll.print();
}
