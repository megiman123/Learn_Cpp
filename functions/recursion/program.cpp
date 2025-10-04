#include <iostream>
using namespace std;

// Function prototype
int factorial(int num);

int main() {
    int n;
    cout << "Enter the number of your choice: ";
    cin >> n;

    cout << "Factorial of " << n << " is " << factorial(n) << endl;

    return 0;
}

int factorial(int num) {
    if (num > 1) {
        return num * factorial(num - 1); // recursive call
    } else {
        return 1; // base case
    }
}


