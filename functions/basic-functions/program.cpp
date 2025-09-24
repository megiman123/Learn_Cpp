#include <iostream>
#include <string>
using namespace std;

void happyBirthday(string name){
  for(int x=0; x<3 ; x++){
    cout << "Happy Birthday "<< name << '!' << '\n';
  }
  cout << '\n';

}

int main(){
  string name;
  cout << "Enter your name: ";
  cin >> name;

  for (int i = 0; i < 5; i++){
        happyBirthday(name);
    }
    return 0;
}
