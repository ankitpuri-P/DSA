#include<iostream>
using namespace std;
int main(){
    int t,fa,sa,ta;
    cin>>t;
    while(t--){
        cin>>fa>>sa>>ta;
        int ans=fa+sa+ta;
        if(ans==180){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}