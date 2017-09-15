#include <iostream>
using namespace std;
int main(){
  int n,f=0;
  cout << "enter a no.(>=10): ";
  cin >> n;
  while (n>0){
    f = f + (n%10);
    n = n/10;}
  cout << "sum is: " << f;
  return 0;
}
