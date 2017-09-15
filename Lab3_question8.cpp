#include <iostream>
using namespace std;
int main()
{
  char b;
  cout << "enter charecter: ";
  cin >> b;
  int x = b;
  if ((x == 97) || (x == 101) || (x == 105) || (x == 111) || (x == 117)){
  cout << "vowel";}
  else{
  cout << "consonant";}
  return 0;  
}
