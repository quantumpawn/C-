#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n,a=0,sum=0;
  cout << "enter";
  cin >> n;
  int c = n;
  int d = n;
  while (c>0){
    a = a + 1;
    c = c/10;
  }
  while (n>0){
    sum = sum + pow((n%10),a);
    n = n/10;
  }
  if (d == sum){
  cout << "Armstrong";}
  else{
  cout << "not armstrong";}
  return 0;
  
}
