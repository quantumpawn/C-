#include <iostream>
using namespace std;
int main(){
  int p,a=0;
  cout << "enter a no.: ";
  cin >> p;
  for (int i = 2; i<p; i++){
    if (p%i == 0){
      a = 1;
      break;}
  }
  if (a == 0){
  cout << "prime";
  }
  else{
  cout << "not prime";}
  return 0;
}

