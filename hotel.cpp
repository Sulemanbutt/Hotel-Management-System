#include <iostream>
#include <conio.h>
#include <string.h>
//#include <graphics.h>
#include <dos.h>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include "array.h"

using namespace std;

void hotel::main_menu()
{
	int choice;
	while(choice!=5)
	{
		system("CLS");
		cout<<"\n\t\t\t\t*************";
		cout<<"\n\t\t\t\t* MAIN MENU *";
		cout<<"\n\t\t\t\t*************";
		cout<<"\n\n\n\t\t\t1.Book A Room";
		cout<<"\n\t\t\t2.Customer Record";
		cout<<"\n\t\t\t3.Rooms Allotted";
		cout<<"\n\t\t\t4.Edit Record";
		cout<<"\n\t\t\t5.Exit";
		cout<<"\n\n\t\t\tEnter Your Choice: ";
		cin>>choice;

		switch(choice)
		{
			case 1:	add();
				break;
			case 2: display();
				break;
			case 3: rooms();
				break;
			case 4:	edit();
				break;
			case 5: break;
			default:
				{
					cout<<"\n\n\t\t\tWrong choice.....!!!";
					cout<<"\n\t\t\tPress any key to continue....!!";
					getch();
				}
		}
	}
}

void hotel::add()
{
	system("CLS");
	int r,flag;
	ofstream fout("Record.txt",ios::app);

	cout<<"\n Enter Customer Detalis";
	cout<<"\n ----------------------";
	cout<<"\n\n Room no: ";
	cin>>r;
	flag=check(r);

	if(flag)
		cout<<"\n Sorry..!!!Room is already booked";

	else
	{
		room_no=r;
		cout<<" Name: ";
		//gets(name);
		fout << name;
		cout<<" Address: ";
		//gets(address);
		fout << address;
		cout<<" Phone No: ";
		//gets(phone);
		fout << phone;
		//fout.write((char*)this,sizeof(hotel));
		cout<<"\n Room is booked...!!!";
	}

	cout<<"\n Press any key to continue.....!!";
	getch();
	fout.close();
}

void hotel::display()
{
	system("CLS");
	ifstream fin("Record.txt",ios::in);
	int r,flag;
	cout<<"\n Enter room no: ";
	cin>>r;

	while(!fin.eof())
	{
		//fin.read((char*)this,sizeof(hotel));
		if(room_no==r)
		{
			system("CLS");
			cout<<"\n Cusromer Details";
			cout<<"\n ----------------";
			cout<<"\n\n Room no: "<<room_no;
			cout<<"\n Name: "<<name;
			cout<<"\n Address: "<<address;
			cout<<"\n Phone no: "<<phone;
			flag=1;
			break;
		}
	}

	if(flag==0)
		cout<<"\n Sorry Room no. not found or vacant....!!";

	cout<<"\n\n Press any key to continue....!!";
	getch();
	fin.close();

}


void hotel::rooms()
{
	system("CLS");
	ifstream fin("Record.txt",ios::in);
	cout<<"\n\t\t\t    List Of Rooms Allotted";
	cout<<"\n\t\t\t    ----------------------";
	cout<<"\n\n Room No.\tName\t\tAddress\t\t\t\tPhone No.\n";

	while(!fin.eof())
	{
		//fin.read((char*)this,sizeof(hotel));
		cout<<"\n\n "<<room_no<<"\t\t"<<name;
		cout<<"\t\t"<<address<<"\t\t"<<phone;
	}
	cout<<"\n\n\n\t\t\tPress any key to continue.....!!";
	getch();
	fin.close();
}

void hotel::edit()
{
	system("CLS");
	int choice,r;

	cout<<"\n EDIT MENU";
	cout<<"\n ---------";
	cout<<"\n\n 1.Modify Customer Record";
	cout<<"\n 2.Delete Customer Record";

	cout<<"\n Enter your choice: ";
	cin>>choice;
	system("CLS");
	cout<<"\n Enter room no: " ;
	cin>>r;

	switch(choice)
	{
		case 1:	modify(r);
			break;
		case 2:	delete_rec(r);
			break;
		default: cout<<"\n Wrong Choice.....!!";
	}
	cout<<"\n Press any key to continue....!!!";
	getch();
}


int hotel::check(int r)
{
	int flag=0;
	ifstream fin("Record.txt",ios::in);
	while(!fin.eof())
	{
		//fin.read((char*)this,sizeof(hotel));
		if(room_no==r)
		{
			flag=1;
			break;
		}
	}

	fin.close();
	return(flag);
}


void hotel::modify(int r)
{
	long pos,flag=0;
	fstream file("Record.txt",ios::in|ios::out|ios::binary);
	while(!file.eof())
	{
		pos=file.tellg();
		//file.read((char*)this,sizeof(hotel));
		if(room_no==r)
		{
			cout<<"\n Enter New Details";
			cout<<"\n -----------------";
			cout<<"\n Name: ";
			file << name;
			cout<<" Address: ";
			file << address;
			cout<<" Phone no: ";
			file << phone;

			file.seekg(pos);
			//file.write((char*)this,sizeof(hotel));
			cout<<"\n Record is modified....!!";
			flag=1;
			break;
		   }
	}

	if(flag==0)
		cout<<"\n Sorry Room no. not found or vacant...!!";
	file.close();
}

void hotel::delete_rec(int r)
{
	int flag=0;
	char ch;
	ifstream fin("Record.txt",ios::in);
	ofstream fout("temp.txt",ios::out);
	while(!fin.eof())
	{
		//fin.read((string*)this,sizeof(hotel));
		if(room_no==r)
		{
			cout<<"\n Name: "<<name;
			cout<<"\n Address: "<<address;
			cout<<"\n Pone No: "<<phone;
			cout<<"\n\n Do you want to delete this record(y/n): ";
			cin>>ch;

			if(ch=='n')
				//fout.write((string*)this,sizeof(hotel));


			flag=1;
		}
		//else
			//fout.write((char*)this,sizeof(hotel));
	}

	fin.close();
	fout.close();
	if(flag==0)
		cout<<"\n Sorry room no. not found or vacant...!!";
	else
	{
		remove("Record.txt");
		rename("temp.txt","Record.txt");
	}
}
