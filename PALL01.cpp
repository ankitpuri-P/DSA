#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string str;
        str=s;
        reverse(str.begin(),str.end());
        if(str==s){
            cout<<"wins"<<endl;
        }
        else{
            cout<<"loses"<<endl;
        }
    }
    return 0;
}