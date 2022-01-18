#include<iostream>
using namespace std;
bool watermelon(int weight){
    if(weight<=2||weight%2!=0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int w;
    cin>>w;
    watermelon(w);
    if(watermelon(w)==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}