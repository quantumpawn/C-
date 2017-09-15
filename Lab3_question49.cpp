#include <iostream>
using namespace std;
int main(){
  int p,sum=0;
  cout << "enter a no.: ";
  cin >> p;
  for (int j=2;j<p;j++){
  int a=0;
  for (int i = 2; i<j; i++){
    if (j%i == 0){
      a = 1;
      break;}
  }
  if (a == 0){
  sum = sum + j;
  }}
  cout << sum;
  return 0;
}

