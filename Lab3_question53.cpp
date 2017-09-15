#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n,sum=0;
  cout << "enter: ";
  cin >> n;
  for (int i=1;i<n;i++){
    if (n%i == 0){
    sum = sum + i;}
  }
  if (sum == n){
  cout << "perfect number";}
  else{
  cout <<"not perfect";}
  return 0;
}
