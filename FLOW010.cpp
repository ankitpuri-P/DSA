#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    char s;
    cin>>t;
    while(t--){
        cin>>s;
       if(s=='B'||s=='b'){
        cout<<"BattleShip\n";
    }
    else if(s=='C'||s=='c'){
        cout<<"Cruiser\n";
    }
    else if(s=='D'||s=='d'){
        cout<<"Destroyer\n";
    }
    else if(s=='F'||s=='f'){
        cout<<"Frigate\n";
    }
    }
    return 0;
}