#include <iostream>
using namespace std;
int main(){
  float P,CP,SP;
  cout << "enter cost price(CP) and selling price(SP): ";
  cin >> CP >> SP;
  P = ((SP-CP)/CP)*100;
  if (P>0){
    cout << "profit: " << P;}
  else{
    cout << "loss: " << -P;}
  return 0;
}
