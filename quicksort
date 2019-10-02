#include <iostream>

using namespace std;

int partition(int*a,int l, int r){
  int p=a[l];
  int i=l;
  int j=r+1;
  int temp;
  
  do{
    do{
      i++;
    }while(a[i]<p&&i<r);

    do{
      j--;
    }while(a[j]>p);
    swap(a[j], a[i]);
  }while(i<j);
  swap(a[i], a[j]);
  swap(a[l],a[j]);
  return j;
}

void Quicksort(int* a,int l, int r){
  if(a!=NULL&&l<r){
    int s=partition(a,l,r);
    Quicksort(a,l,s);
    Quicksort(a,s+1,r);
  }
}

int main() {
  int a[]={1,6,8,4,50};
  Quicksort(a, 0, 4);
  for(int i=0;i<5;i++){
    cout<<a[i]<<endl;
  }
}
