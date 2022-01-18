#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x;
    float y;
    cin>>x>>y;
    if(x%5==0 && (x+0.50)<=y){
        cout<<setprecision(2)<<fixed;
        cout<<(y-x-0.50);
    }
    else{
        cout<<setprecision(2)<<fixed;
        cout<<y;
    }
    return 0;
}