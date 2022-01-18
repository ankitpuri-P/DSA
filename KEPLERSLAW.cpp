#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        float temp_1=(pow(t1,2))/(pow(r1,3));
        float temp_2=(pow(t2,2))/(pow(r2,3));
        if(temp_1==temp_2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}