#include <iostream>
using namespace std;
int main(){
  int n,exp,m=1;
  cout << "enter no. , exp: ";
  cin >> n >> exp;
  for (int i = exp; i>0;i--){
    m = m*n;
  }
  cout << "power is: " << m << endl;
  return 0;
}
