#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,r,dec=0,i=0;
	cout<<"Enter a binary number : ";
	cin>>n; 	// Input binary number

	while(n>0){
		r = n%10;
		dec += r*pow(2,i);
		n/=10;
		i++;
	}//end of while

	cout<<"Corresponding decimal number is : "<<dec<<endl;//print decimal number

	return 0;
}