#include <iostream>
#include <conio.h>
#include <string.h>
#include <dos.h>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>
#include "array.h"
#include "node.h"
#include "LL.h"
#include "stack.h"
#include "queue.h"

using namespace std;

void Array();
void linkList();
void stack();
void queue();


int room_no;
string name;
string address;
string phone;
int option;
string key;


int main()
{
    system("CLS");
    cout<<"\n\t\t\t***********************************";
    cout<<"\n\t\t\t* HOTEL MANAGEMENT SYSTEM PROJECT *";
    cout<<"\n\t\t\t***********************************";
    cout<<"\n\n\n\n\t\t\t\tMade By:-";
    cout<<"\n\t\t\t\tName : Muhammad Suleman";
    cout<<"\n\t\t\t\tID : 14024020120";
    cout<<"\n\t\t\t\tSubmitted To:";
    cout<<"\n\t\t\t\tMr. Zeeshan Khan";
    cout <<"\n\n\n\n";

    do
    {
        cout << "\n1. Array \n";
        cout << "2. Linked List \n";
        cout << "3. Stack \n";
        cout << "4. Queue \n";
        cout << "5. Exit \n";
        cout << "\nSelect option : ";
        cin >> option;
        cout<<endl;

        switch(option)
        {
        case 1:
            Array();
            break;
        case 2:
            linkList();
            break;
        case 3:
            stack();
            break;
        case 4:
            queue();
            break;
        default:
            break;
        }
    }
    while(option != -1);

    getch();
}

//***********************************************************

void Array()
{
    hotel h;

    do
    {
        cout << "1. Main menu \n";
        cout << "2. Add \n";
        cout << "3. Display \n";
        cout << "4. Rooms \n";
        cout << "5. Edit \n";
        cout << "6. Check \n";
        cout << "7. Modify \n";
        cout << "8. Delete Record \n";
        cout << "9. Exit \n";
        cout << "Select option : ";
        cin >> option;

        switch(option)
        {
        case 1:
            h.main_menu();
            break;
        case 2:
            h.add();
            break;
        case 3:
            h.display();
            break;
        case 4:
            h.rooms();
            break;
        case 5:
            h.edit();
            break;
        case 6:
            int r;
            cin >> r;
            h.check(r);
            break;
        case 7:
            int s;
            cin >> s;
            h.modify(s);
            break;
        case 8:
            int t;
            cin >> t;
            h.delete_rec(t);
            break;
        default:
            cout << "Invalid option !!";
            break;
        }
    }
    while(option != -1);

}

//***********************************************************

void linkList()
{
    LinkList ll;

    do
    {
        cout << "1. Insert at head \n";
        cout << "2. Insert at tail\n";
        cout << "3. Search \n";
        cout << "4. Delete at head\n";
        cout << "5. Delete at tail \n";
        cout << "6. Delete Specific Node \n";
        cout << "7. Delete List \n";
        cout << "8. Print \n";
        cout << "9. Exit \n";
        cout << "Select option : ";
        cin >> option;

        switch(option)
        {
        case 1:
            cout << "Enter room number : ";
            cin >> room_no;
            cout << "Enter Name : ";
            cin >> name;
            cout << "Enter address : ";
            cin >> address;
            cout << "Enter phone no : ";
            cin >> phone;

            ll.insertAtHead(room_no,
                            name,
                            address,
                            phone);
            break;
        case 2:
            cout << "Enter room number : ";
            cin >> room_no;
            cout << "Enter Name : ";
            cin >> name;
            cout << "Enter address : ";
            cin >> address;
            cout << "Enter phone no : ";
            cin >> phone;

            ll.insertAtTail(room_no,
                            name,
                            address,
                            phone);
            break;
        case 3:
            cout << "Enter phone : ";
            cin >> key;
            ll.search(key);
            break;
        case 4:
            ll.deleteAtHead();
            break;
        case 5:
            ll.deleteAtTail();
            break;
        case 6:
            cout << "Enter phone : ";
            cin >> key;
            ll.deleteSpecificNode(key);
            break;
        case 7:
            ll.deleteList();
            break;
        case 8:
            ll.print();
            break;
        default:
            cout << "Invalid option !!";
            break;
        }
    }
    while(option != -1);
}

//***********************************************************

void stack()
{
    Stack st;

    do
    {
        cout << "1. Push \n";
        cout << "2. Pop \n";
        cout << "3. Display \n";
        cout << "4. Exit \n";
        cout << "Select option : ";
        cin >> option;

        switch(option)
        {
        case 1:

            cout << "Enter room number : ";
            cin >> room_no;
            cout << "Enter Name : ";
            cin >> name;
            cout << "Enter address : ";
            cin >> address;
            cout << "Enter phone no : ";
            cin >> phone;

            st.push(room_no,
                    name,
                    address,
                    phone);
            break;
        case 2:
            st.pop();
            break;
        case 3:
            st.display();
            break;
        default:
            cout << "Invalid option !!";
            break;
        }
    }
    while(option != -1);
}

//**********************************************************
void queue()
{
    Queue q;

    do
    {
        cout << "1. Push \n";
        cout << "2. Pop \n";
        cout << "3. Display \n";
        cout << "4. Exit \n";
        cout << "Select option : ";
        cin >> option;

        switch(option)
        {
        case 1:
            cout << "Enter room number : ";
            cin >> room_no;
            cout << "Enter Name : ";
            cin >> name;
            cout << "Enter address : ";
            cin >> address;
            cout << "Enter phone no : ";
            cin >> phone;

            q.push(room_no,
                   name,
                   address,
                   phone);
            break;
        case 2:
            q.pop();
            break;
        case 3:
            q.display();
            break;
        default:
            cout << "Invalid option !!";
            break;
        }
    }
    while(option != -1);
}


