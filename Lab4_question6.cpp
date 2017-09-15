#include <iostream>
using namespace std;
int primes(int a, int b){
  for (int i = a; i<=b;i++){
    int c = 0;
    for (int j = 2;j<i;j++){
      if (i%j ==0){
      c = 1;}
      
    }
    if ((c == 0)&&(i!=1)){
    cout << i << endl;}
  }
  return 0;
}

int main(){
  int a,b;
  cout << "enter range: ";
  cin >> a >> b;
  primes(a,b);
  return 0;
}
