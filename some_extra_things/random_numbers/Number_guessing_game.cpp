#include <iostream>
#include <cmath>
using namespace std;

int main() {    
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand()%100)+1;

    cout << "-----------Number guessing game-----------" << endl;
    do{
        cout << "Enter a guess between 1 and 100: ";
        cin >> guess;
        tries++;
        if (guess > num){
            cout<<"To high!"<< endl;
        }
        else if(guess < num){
            cout<<"To low!"<< endl;
        }
        else{
            cout<<"Correct! You win!"<< endl;
            cout<<"You took "<<tries<<" tries to guess the number!"<< endl;
        }
    }while(guess != num);
    cout<<"------------------------------------------"<< endl;
    return 0;
}