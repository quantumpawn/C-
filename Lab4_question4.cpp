#include <iostream>
using namespace std;
int chk(int a){
  if (a % 2 == 0){
  return 0; }
  else{
  return 1;}
}
int main(){
  int a;
  cout << "enter: ";
  cin >> a;
  int s = chk(a);
  if (s == 0){
  cout << "the number is even";}
  else{
  cout << "the number is odd";}
  return 0;
}
