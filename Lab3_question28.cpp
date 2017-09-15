#include <iostream>
using namespace std;
int main(){
  int s=0,a=1,n;
  cout <<"enter n: ";
  cin >> n;
  while (a<=n){
    if (a%2 == 0){
      s = s + a;}
  a++;}
  cout << s;
  return 0;
}
