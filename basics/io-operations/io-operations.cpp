#include <iostream>
#include <string>
using namespace std;

int main() {
    // Different types of input/output
    
    // Basic output
    cout << "=== Basic I/O Operations Demo ===" << endl;
    
    // Getting user input
    string fullName;
    int age;
    double salary;
    char grade;
    
    // Reading strings with spaces
    cout << "Enter your full name: ";
    getline(cin, fullName);
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Enter your salary: ";
    cin >> salary;
    
    cout << "Enter your grade: ";
    cin >> grade;
    
    // Displaying the collected information
    cout << "\n=== Your Information ===" << endl;
    cout << "Name: " << fullName << endl;
    cout << "Age: " << age << " years old" << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Grade: " << grade << endl;
    
    return 0;
}