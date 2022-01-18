#include<iostream>
using namespace std;
int main(){
    int T;
    int A,B;
    cin>>T;
    while(T--){
        cin>>A>>B;
        int rem=A%B;
        cout<<rem<<endl;
    }
}