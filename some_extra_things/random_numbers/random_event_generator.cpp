#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    int randnum= rand()%5 + 1;
    switch(randnum){
        case 1:cout<<"You win a bumper sticker"<< '\n';
            break;
        case 2:cout<<"You win a t-shirt"<< '\n';
            break;
        case 3:cout<< "You win $50" << '\n';
            break;  
        case 4:cout << "You win a PS5"<< '\n';
            break;
        case 5:cout << "You win a bugatti chiron" <<'\n';
            break;    
    }
    for (int i= 0; i < 5; i++){ 
     cout << endl;
    }
    cout << "I cant actually give you this, I dont have the money :(" << endl;
    for (int i= 0; i < 5; i++){ 
     cout << endl;
    }
    return 0;
}