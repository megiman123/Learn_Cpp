#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    switch(a){
        case 5 : cout<<"Value of a is 5"; break;
        case 10 : cout<<"Value of a is 10"; break;
        default : cout<<"Value of a is neither 5 nor 10";
    }

    return 0;
}