#include <iostream>
using namespace std;
int main(){
  int n,f,l;
  cout << "enter a no.(>=10): ";
  cin >> n;
  l = n%10;
  n = n /10;
  while (n>0){
    f = n;
    n = n/10;}
  cout << "1st digit: " << f << ";last digit: " << l;
  return 0;
}
