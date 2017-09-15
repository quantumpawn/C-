#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
  char a;
  cout << "enter a symbol: ";
  cin >> a;
  if (isalpha(a)){
  cout << "alphabet";}
  else{
  cout << "not alphabet";}
  return 0;
}
