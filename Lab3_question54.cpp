#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cout << "enter: ";
  cin >> n;
  for (int j = 2; j<=n;j++){
  int sum = 0;
  for (int i=1;i<j;i++){
    if (j%i == 0){
    sum = sum + i;}
  }
  if (sum == j){
  cout << j;}}
  return 0;
}
