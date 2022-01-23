#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        /*In a company an emplopyee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of 
        base salary and DA = 90% of basic salary.If his salary is either equal to or above Rs. 1500,
         then HRA = Rs. 500 and DA = 98% of basic salary. If the Employee's salary is input, write a
          program to find his gross salary.*/
        int s;                  
        cin>>s;
        double hra,da,gs;
        if(s<1500){
            hra=(s*10)/100;
            da=(s*90)/100;
            gs=s+hra+da;
            cout<<fixed<<setprecision(2)<<gs<<endl;
        }
        else if(s>=1500){
            hra=500;
            da=(s*98)/100;
            gs=s+hra+da;
            cout<<fixed<<setprecision(2)<<gs<<endl;
        }
    }
    return 0;
}