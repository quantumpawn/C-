#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n,m=0,a=0;
  cout << "enter no: ";
  cin >> n;
  int c = n;
  while (n>0){
     a = a + 1;
     m = m*10 + (n%10); 
     n = n / 10;
  } 
  if (c == m){
  cout << "palindrome!";
  }
  else{
  cout << "not palindrome!";
  }
  return 0;
}
