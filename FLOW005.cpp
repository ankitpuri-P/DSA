#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ar[]={100,50,10,5,2,1};
        int n;
        cin>>n;
        int ans=0;
        while(n!=0){
        for(int i=0;i<=6;i++){
            if(ar[i]<=n){
                n=n-ar[i];
                ans++;
                break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}