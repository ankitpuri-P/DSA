#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    int t;
    cin>>t;
    int size=1000,arr[size],car=0,j=size-1;
    arr[size-1]=1;
    while(t>0){
      for(int k=size-1;k>=j;k--){
        int x=arr[k]*t+car;
        arr[k]=x%10;
        car=x/10;
      }
      while(car>0){
        arr[--j]=car%10;
        car=car/10;
      }
      t--;
    }
    for(int k=j;k<size;k++){
      cout<<arr[k];
    }
    cout<<endl;
  }
  return 0;
}