#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%4==0){
        n=n+1;
        cout<<n;
    }
    else{
        n=n-1;
        cout<<n;
    }
    return 0;
}