#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        int ans=fact(x);
        cout<<ans<<endl;
    }
    return 0;
}