#ifndef LL_H_INCLUDED
#define LL_H_INCLUDED

#include "node.h"

class LinkList
{
private:
    Node *head;

public:
    LinkList();
    void insertAtHead(int room_no1,
                      string name1,
                      string address1,
                      string phone1);

    void insertAtTail(int room_no1,
                            string name1,
                            string address1,
                            string phone1);
    Node* search(string key);
    void deleteAtHead();
    void deleteAtTail();
    void deleteSpecificNode(string key);
    void deleteList();
    void print();
};


#endif // LL_H_INCLUDED
