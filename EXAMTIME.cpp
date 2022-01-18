#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z,a,b,c;
        cin>>x>>y>>z;
        cin>>a>>b>>c;
        int temp1=x+y+z;
        int temp2=a+b+c;
        if(temp1>temp2){
            cout<<"Dragon"<<endl;
        }
        else if(temp1<temp2){
            cout<<"Sloth"<<endl;
        }
        else{
            if(x>a){
                cout<<"Dragon"<<endl;
            }
            else if(a>x){
                cout<<"Sloth"<<endl;
            }
            else if(x==a && y>b){
                cout<<"Dragon"<<endl;
            }
            else if(x==a && y<b){
                cout<<"Sloth"<<endl;
            }
            else{
                cout<<"Tie"<<endl;
            }
        }
    }
    return 0;
}