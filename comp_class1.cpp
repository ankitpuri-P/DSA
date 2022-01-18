#include <iostream>
using namespace std;
#include "comp_class.cpp"

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    Complex f1(real1, imaginary1);
    Complex f2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        f1.add(f2);
        f1.print();
    }
    else if(choice == 2) {
        f1.multiply(f2);
        f1.print();
    }
    else {
        return 0;
    }   
}