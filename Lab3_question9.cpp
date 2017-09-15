#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
  char a;
  cout << "enter a character: ";
  cin >> a;
  if (isalpha(a)){
  cout << "alphabet";
  }
  if (isdigit(a)){
  cout <<"digit";}
  else {
  cout << "spcl char.";}
  return 0;
}
