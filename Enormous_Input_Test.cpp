#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int i;
    int ans=0;
    for(i=1;i<=n;i++){
        int t;
        cin>>t;

        if(t%k==0){
            ans++;
        }
    }
    cout<<ans;
}