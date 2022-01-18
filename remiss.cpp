#include<iostream>
using namespace std;
int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int ans=a+b;
        cout<<max(a,b)<<" "<<ans<<endl;
    }
    return 0;
}