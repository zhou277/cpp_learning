#include <iostream>
using namespace std;

int main(){
    int i;
    double a;
    int &I = i;
    double &A = a;
    
    i = 5;
    a = 10;
    cout << i << endl;
    cout << I << endl;
    cout << a << endl;
    cout << A << endl;
    
    return 0;
}