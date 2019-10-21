#include<iostream>
using namespace std;
 
void selection_sort(int *a,int n)              // Function that performs selection sort
{
    for(int i=0;i<n;i++)
    {
       int min1=i,j;
        for(j=i;j<n;j++){
            if(a[j]<a[min1])min1=j;
            }
         if(min1!=i)
         {
              int t=a[i];
              a[i]=a[min1];
              a[min1]=t;
         }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array\n";        //Receives size of array
    cin>>n;
    int a[n];
    cout<<"Enter elements of array\n";         //Takes array elements as input that has to be sorted
    for(int i=0;i<n;i++)
        cin>>a[i];
    selection_sort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        
        return 0;
 }
