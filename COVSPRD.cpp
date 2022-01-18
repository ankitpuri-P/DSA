#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        long long int temp=1;
        cin>>n>>d;
        for(int i=1;i<=d;i++)
        if(i<=10){
            temp=2*temp;
            if(temp>n){
                temp=n;
                break;
            }
        }
        else{
            temp=3*temp;
            if(temp>n){
                temp=n;
                break;
            }
        }
        cout<<temp<<endl;
    }
    return 0;
}