#include <iostream>
#include <ctime>
using namespace std;
int main(){
    //pseudo random not truly random
    srand(time(NULL));

    int num = (rand() % 6) + 1;
    cout << num; 

    return 0;
}