#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int q,p;
        float fp;
        cin>>q>>p;
        if(q>1000){
            float dis=((q*p)*10)/100;
            fp=(q*p)-dis;
            cout<<fixed<<setprecision(6)<<fp<<endl;
        }
        else{
            fp=q*p;
            cout<<fixed<<setprecision(6)<<fp<<endl;
        }
    }
    return 0;
}