#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int a,b, gcd = 1;
  cout << "enter 2 nos.: ";
  cin >> a >> b;
  for (int i = 1; i <= min(a,b); i++){
    if ((a%i == 0)&&(b%i == 0)){
    gcd = i;}
  }
  cout << gcd << endl;
  return 0;
}

