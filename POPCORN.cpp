#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,b1,b2,c1,c2;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        long long int com1=a1+a2;
        long long int com2=b1+b2;
        long long int com3=c1+c2;
        if(com1>=com2 && com1>=com3){
        cout<<com1<<endl;
        }
        else if(com2>=com1 && com2>=com3){
        cout<<com2<<endl;
        }
        else if(com3>=com2 && com3>=com1){
        cout<<com3<<endl;
        }
    }
    return 0;
}