#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    char str1[500];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>str1;
        int flag=strlen(str1);
        if(flag>10){
            cout<<str1[0]<<flag-2<<str1[flag-1]<<endl;
        }
        else{
            cout<<str1<<endl;
        }
    }
    return 0;
}

       