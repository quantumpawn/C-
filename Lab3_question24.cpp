#include <iostream>
using namespace std;
int main(){
  int a;
  char s = 'A';
  a = int(s);
  while (a <= int('Z')){
  cout << char(a);
  a++;}
  return 0; 
}
