#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n1,n2;
    cin>>t;
    while(t--){
        cin>>n1>>n2;
        if(n1>n2){
            cout<<">"<<endl;
        }
        if(n1<n2){
            cout<<"<"<<endl;
        }
        if(n1==n2){
            cout<<"="<<endl;
        }
    }
    return 0;
}