#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int gcd=1;
        int j=min(a,b);
        for(int i=1;i<=j;i++){
            if(a%i==0 && b%i==0){
                gcd=i;
            }
        }
        cout<<gcd<<endl;
        int lcm=(a*b)/gcd;
        cout<<lcm<<endl;
    }
    return 0;
}