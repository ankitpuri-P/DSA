#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        int var=0;
        for(int i=11;i>=0;i--){
            int temp=pow(2,i);
            while(p>=temp){
                p-=temp;
                var++;
            }
        }
        cout<<var<<endl;
    }
    return 0;
}