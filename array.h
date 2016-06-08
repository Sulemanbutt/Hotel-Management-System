#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED


using namespace std;

class hotel
{
	int room_no;
	string name;
	string address;
	string phone;

	public:
	void main_menu();		//to display the main menu
	void add();			    //to book a room
	void display(); 		//to display the customer record
	void rooms();			//to display alloted rooms
	void edit();			//to edit the customer record
	int check(int);			//to check room status
	void modify(int);		//to modify the record
	void delete_rec(int);   //to delete the record
};

#endif // ARRAY_H_INCLUDED
