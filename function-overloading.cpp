//Program to demonstrate function overloading
#include <iostream>
#include <cmath>
using namespace std;
void area(float, float);
void area(float);
void area(float, float, float);
int main()
{
	int flag;
	float c1, c2, c3;
	float l, b;
	float s;
	cout<<"MAIN MENU:\n";
	cout<<"1. Area of Rectangle\n";
	cout<<"2. Area of Square\n";
	cout<<"3. Area of Triangle\n";
	cout<<"5. Exit\n";
	cout<<"\nEnter Choice:";
	cin>>flag;
	switch (flag)
	{
		case 1:
			cout<<"\nEnter Length: ";
			cin>>l;
			cout<<"\nEnter Breadth: ";
			cin>>b;
			area(l, b);
			break;
		case 2:
			cout<<"\nEnter Side: ";
			cin>>s;
			area(s);
			break;
		case 3:
			cout<<"\nEnter A: ";
			cin>>c1;
			cout<<"Enter B: ";
			cin>>c2;
			cout<<"Enter C: ";
			cin>>c3;
			area (c1, c2, c3);
			break;
	}
	return 0;
}
void area(float l1, float b1)
{
	float arr;
	arr = (l1 * b1);
	cout<<"Area = "<<arr;
}
void area(float s1)
{
	float arr;
	arr = (s1 * s1);
	cout<<"Area = "<<arr;
}
void area(float a1, float a2, float a3)
{
	float semi, arr;
	semi = (a1 + a2 + a3)/2;
	arr = sqrt((semi)*(semi - a1)*(semi - a2)*(semi - a3));
	cout<<"Area = "<<arr;
}

