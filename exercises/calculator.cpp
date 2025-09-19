#include <iostream>
using namespace std;
int main(){
    cout << "------------MY CALCULATOR------------"<<endl;
    double a,b;
    char op;
    
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    cout << "Enter the operator (+, -, *, /) : ";
    cin >> op;
    
    switch(op){
        case '+':
            cout << endl << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << endl << a << " - " << b << " = " << a - b << endl;
            break;
        case '*':
            cout << endl << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            if(b != 0) {
                cout << endl << a << " / " << b << " = " << a / b << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << endl << "The entries that you entered are invalid";
            break;
    }

    return 0;
}