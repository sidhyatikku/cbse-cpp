#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void main(){ 
    int n, i, flag=1;

    cout<<"Enter a positive integer: ";
  	cin>>n;
 for (i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
           flag=0;
           break;
        }
    }
    if(n==1)
       cout<<n<<" is not a Prime number"<<endl;

    else if(n==0)
       cout<<n<<" is not a Prime number"<<endl;
     
    else if(flag)  
      cout<<n<<" is a Prime number"<<endl;

    else
         cout<<n<<" is not a Prime number"<<endl; 

    getch();
}

//  I have written more effective code for you to reduce the time analysis and making it effective

/*

#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i, m=0, flag=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;  
  m=n/2;  
  for(i = 2; i <= m; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Number is Prime."<<endl;  
  return 0;  
} 

*/ 
