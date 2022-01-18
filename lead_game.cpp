#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,si=0,ti=0,s1=0,s2=0,temp,a,b,s=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        si+=a;
        ti+=b;
        if(si>ti){
            s1=si-ti;
        }
        if(si<ti){
            s2=ti-si;
        }
        if(s1>s){
            s=s1;
            temp=1;
        }
        if(s2>s){
            s=s2;
            temp=2;
        }
    }
        cout<<temp<<" "<<s<<endl;
}