#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
int len;
cout<<"\n enter the length of the string";
cin>>len;
cout<<"\n enter the string:";
for(int i=0;i<len;i++)
{
  cin>>str[i];
}

for(int i=0; i<len;i++)  // this loop to traverse the whole strng untill nul, or end of the string comes
{
  for(int j=i;j<=len;j++) // this loop is to start picking up every element of the string one by one 
  {
    for(int k=i;k<j;k++)  // this loop is to make up the pairs of every element of string 1,2,3,depends on the length of the strng
    {
      cout<<str[k];
    }
    cout<<endl;
  }
}
}
