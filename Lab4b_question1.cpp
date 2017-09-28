#include <iostream>
using namespace std;

int power(int a, int n){
  if ((n==0)&&(a!=0)){
  return 1;}
  else{
    return a*power(a,n-1);
  }
}

int main(){
  int a,n;
  cout << "enter: ";
  cin >> a >> n;
  int P = power(a,n);
  cout << a << "^" << n << "=" << P<< endl;
  return 0;
}
