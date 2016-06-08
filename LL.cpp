#include "LL.h"
#include <iostream>

using namespace std;

LinkList::LinkList()
{
    head = NULL;
}

void LinkList :: insertAtHead(int room_no1,
                              string name1,
                              string address1,
                              string phone1)
{
    Node *ptr = new Node(room_no1,
                         name1,
                         address1,
                         phone1);

    ptr->room_no = room_no1;
    ptr->name = name1;
    ptr->address = address1;
    ptr->phone = phone1;

    //ptr->next = NULL;
    ptr->next = head;
    head = ptr;
}


void LinkList::insertAtTail(int room_no1,
                            string name1,
                            string address1,
                            string phone1)
{
    Node *ptr = new Node(room_no1,
                         name1,
                         address1,
                         phone1);

    ptr->room_no = room_no1;
    ptr->name = name1;
    ptr->address = address1;
    ptr->phone = phone1;

    ptr->next = NULL;

    if(head == NULL)
        head = ptr;
    else
    {
        Node *temp = head;

        while(temp ->next != NULL)
            temp = temp->next;

        temp->next = ptr;
    }
}

void LinkList :: deleteAtHead()
{
    if(head == NULL)
        return;
    else
    {
        Node * temp = head;
        head = head->next;
        //cout<<"\nPOP Operation........\nPoped value is : " << temp->id << " ";
        delete temp;
    }
}

Node* LinkList :: search(string key)
{
    Node* temp;
    temp = head;

    while (temp != NULL)
    {
        if (temp->phone == key)
        {
            return temp;
        }
        else
            temp = temp->next;
    }
    return NULL;
}

void LinkList :: deleteAtTail()
{
    if ( head == NULL)
    {
        return;
    }
    else
    {
        Node * current = head;
        Node * previous = head;

        while(current->next!=NULL)
        {
            previous=current;
            current=current->next;
        }
        //cout<<"\nPOP Operation........\nPoped value is : " << current->id << " ";
        previous->next=NULL;
        delete current;
    }
}

void LinkList :: deleteSpecificNode(string key)
{
    Node *current,*previous;
    current=previous=head;
    while(current!=NULL)
    {
        if(current->phone==key)
        {
            if(current==previous)
            {
                head=head->next;
            }
            previous->next=current->next;
            delete current;
            break;
        }
        previous = current;
        current = current -> next;
    }
}


void LinkList :: deleteList()
{
    delete head;
    head=NULL;
}

void LinkList::print()
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->room_no<<endl;
        cout<<temp->name<<endl;
        cout<<temp->address<<endl;
        cout<<temp->phone<<endl;
        temp = temp->next;
    }
}
