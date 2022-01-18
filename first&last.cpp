#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int tem1,temp,t;
        cin>>t;
        temp=t%10;
        while(t>0){
        tem1=t%10;
        t=t/10;
     }
        int sum=temp+tem1;
        cout<<sum<<endl;
    }
    return 0;
}