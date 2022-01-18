#include<bits/stdc++.h>
using namespace std;
#include "class_frac.cpp"
int main(){
    fraction f1(20,12);
    fraction f2(12,96);
    f1.add(f2);
    f1.print();
    return 0;
}