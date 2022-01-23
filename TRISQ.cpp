#include<bits/stdc++.h>
#define sq 4
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int b;
        cin>>b;
        int tri=(0.5*b*b);
        if(tri<sq){
            cout<<"0"<<endl;
        }
        else{
            int ans=tri/sq;
            cout<<ans<<endl;
        }
    }
    return 0;
}