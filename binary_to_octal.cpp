#include<bits/stdc++.h>
using namespace std;

//function to convert binary to decimal
int bin_to_dec(int n){ 
	int r,i=0,dec=0;
	while(n!=0){
		r = n%10;
		n/=10;
		dec += r*pow(2,i);
		i++;
	}//end of while

	return dec;
}

int main(){
	int bin,oct=0,r,i=1;
	cout<<"Enter a binary number : "; 	//input binary number
	cin>>bin;

	while(bin!=0){
		r=bin%1000;
		bin/=1000;
		oct += bin_to_dec(r) * i;
		i*=10;
	}//end of while

	cout<<"Corresponding octal number is : "<<oct<<endl;	//print octal number

	return 0;
}