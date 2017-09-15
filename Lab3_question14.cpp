#include <iostream>
using namespace std;
int main(){
  float a,b,c;
  cout << "enter angles(deg): ";
  cin >> a >> b >> c;
  if (a+b+c == 180){
    cout <<"triangle!" << endl;}
  else{
    cout <<"not a triangle!" << endl;}
  return 0;
} 
