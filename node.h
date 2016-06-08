#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <string>

using namespace std;

class Node
{
public:
    int room_no;
    string name;
    string address;
    string phone;

    Node* next;

    Node(int room_no,
         string name,
         string address,
         string phone);

};

#endif // NODE_H_INCLUDED
