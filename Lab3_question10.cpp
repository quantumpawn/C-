#include <iostream>
#include <cctype>
using namespace std;
int main(){
  char a;
  cout << "enter an alphabet: ";
  cin >> a;
  if (isupper(a)){
  cout <<"uppercase";}
  else {
  cout <<"lowercase";}
  return 0;
}

