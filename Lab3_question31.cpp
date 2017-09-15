#include <iostream>
using namespace std;
int main(){
  int n,a=0;
  cout << "enter a number: ";
  cin >> n;
  while (n>0){
    a = a + 1;
    n = n/10;}
  cout << "no. of digits: " << a << endl;
  return 0;
 
}
