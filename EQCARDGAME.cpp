#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int help=52%k;
        if(52%k==0){
            cout<<"0"<<endl;
        }
        else if(52%k!=0){
            cout<<help<<endl;
        }
    }
    return 0;
}