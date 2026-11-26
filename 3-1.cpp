#include <iostream>
using namespace std;

int main(){
    int value= 20;
    int *ip;
    ip = &value;

    cout << "value is "<< value << endl;
    cout << "address of value is " << ip << endl;


    return 0;
}