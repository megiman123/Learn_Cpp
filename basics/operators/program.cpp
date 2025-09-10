#include <iostream>

using namespace std;

int main(){
    int a = 3, b = 5;

    //addition operator
    cout << "a + b = " << a+b <<endl;

    //subtraction operator
    cout <<"a - b = " << a-b <<endl;

    //multiplication operator
    cout << "a * b = " << a*b <<endl;       

    //division operator
    cout << "a / b = " << a/b <<endl;

    //Modulo operator
    cout << "a % b = " << a%b <<endl;

    //increment operator
    cout << "++a = " << ++a <<endl;

    //decrement operator
    cout << "--b = " << --b <<endl; 

    //All these used above were arithmetic operators

    //Now the operators that will be used will be  relational operators

    //equal to operator
    cout << "a == b = " << (a+b) <<endl; 

    //Greater than operator
    cout<< "a > b is " << (a > b) <<endl;

    //Less than operator
    cout << "a < b is " << (a < b) <<endl;

    //Not equal to operator
    cout << "a != b is " << (a != b) <<endl;

    //Greater than or equal to operator
    cout << "a >= b is " << (a >= b) <<endl;

    //Less than or equal to operator
    cout << "a <= b is " << (a <= b) <<endl;

    //Now we are going to see some logical operators

    //Logical AND operator
    cout << "(a && b) is "<<(a && b) <<endl;

    //Logical OR operator
    cout << "(a || b) is "<<(a || b) <<endl;

    //Logical NOT operator
    cout << "!b is "<<!(b) <<endl;

    return 0;
}