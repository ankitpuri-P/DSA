#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w;
        cin>>w;
        int temp,sum=0;
        while(w>0){
            temp=w%10;
            sum=sum+temp;
            w=w/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}