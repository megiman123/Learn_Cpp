#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    if(a==5){
        cout << "a is equal to 5" << endl;
    }
    else if(a == 3){
        cout << "a is equal to 3" << endl;
    }
    else{
        cout << "a is not equal to 5 or 3" << endl;
    }

    return 0;
}