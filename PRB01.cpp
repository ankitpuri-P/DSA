#include<iostream>
using namespace std;
int helper(int n){
    if(n<=1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    for(int i=2;i<=(n+1)/2;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(helper(n)==1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}