#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
        int ar[t];
        for(int i=0;i<t;i++){
            cin>>ar[i];
        }
        int odd_count=0,even_count=0;
        for(int i=0;i<t;i++){
            if(ar[i] & 1 == 1)
            odd_count++;
            else
            even_count++;
        }
        if(even_count>odd_count){
            cout<<"READY FOR BATTLE";
        }
        else if(even_count==odd_count){
            cout<<"NOT READY";
        }
        else{
            cout<<"NOT READY";
        }
    return 0;
}