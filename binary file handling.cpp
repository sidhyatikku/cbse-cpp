//Program 11_Priyanshu
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
using namespace std;
class data
{
	int roll;
	char name[40];
	float marks;
	public:
		void input();
		void show();
		int ret()
		{
			return roll;
		}
}obj;
void data::input()
{
	cout<<"Enter Name: ";
	cin.getline(name, 40);
	cout<<"Enter roll number: ";
	cin>>roll;
	cout<<"Enter Marks: ";
	cin>>marks;
}
void data::show()
{
	cout<<"Roll No.: "<<roll<<'\n';
	cout<<"Name: "<<name<<'\n';
	cout<<"Marks: "<<marks<<'\n';
	cout<<'\n';
}
void add();
void modify();
void display();
void del();
int main()
{
	int x;
	while(1)
	{
		system("cls");
		cout<<"MAIN MENU:\n";
		cout<<"1. Insert Record\n";
		cout<<"2. Modify Record\n";
		cout<<"3. Delete Record\n";
		cout<<"4. Display Records\n";
		cout<<"5. Exit\n";
		cout<<"\nEnter Choice: ";
		cin>>x;
		cin.ignore();
		cout<<'\n';
		switch(x)
		{
			case 1:
				add();
				system("pause");
				break;
			case 2:
				modify();
				system("pause");
				break;
			case 3:
				del();
				system("pause");
				break;
			case 4:
				display();
				system("pause");
				break;
			case 5:
				exit(0);
		}
	}
	return 0;
}
void add()
{
	ofstream file("binary file handling.dat", ios::binary | ios::app);
	obj.input();
	file.write((char*)&obj, sizeof(obj));
	file.close();
}
void display()
{
	ifstream file2("binary file handling.dat", ios::binary);
	while(file2)
	{
		file2.read((char*)&obj, sizeof(obj));
		if(file2.eof())
		{
			break;
		}
		obj.show();
	}
	file2.close();
}
void del()
{
	int flag;
	cout<<"\nEnter Roll No. of student whose record you wish to delete: ";
	cin>>flag;
	ifstream F("binary file handling.dat", ios::binary);
	ofstream F1("temp.dat", ios::binary | ios::app);
	while(F)
	{
		F.read((char*)&obj, sizeof(obj));
		if(F.eof())
		{
			break;
		}
		if(obj.ret() != flag)
		{
			F1.write((char*)&obj, sizeof(obj));
		}
	}
	F.close();
	F1.close();
	remove("binary file handling.dat");
	rename("temp.dat", "binary file handling.dat");
	cout<<"\nNew Database: \n\n";
	display();
}
void modify()
{
	int flag;
	cout<<"\nEnter roll no. of student whose record you wish to modify: ";
	cin>>flag;
	cin.ignore();
	ifstream F2("binary file handling.dat", ios::binary);
	ofstream F3("temp.dat", ios::binary | ios::app);
	while(F2)
	{
		F2.read((char*)&obj, sizeof(obj));
		if(F2.eof())
		{
			break;
		}
		if(obj.ret() != flag)
		{
			F3.write((char*)&obj, sizeof(obj));
		}
	}
	F2.close();
	obj.input();
	F3.write((char*)&obj, sizeof(obj));
	F3.close();
	remove("binary file handling.dat");
	rename("temp.dat", "binary file handling.dat");
	cout<<"\nUpdated database:\n\n";
	display();
}
