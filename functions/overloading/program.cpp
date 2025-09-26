#include <iostream>
#include <string>
using namespace std;
void bakepizza(string topping1);
void bakepizza();
int main(){
    bakepizza();
    bakepizza("extra cheese");

  return 0;
}
void bakepizza(){
  cout<<"Here is your pizza!\n";
}
void bakepizza(string topping1){
  cout<<"Here is your " << topping1 << " pizza!\n";
}
    
