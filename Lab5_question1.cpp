#include <iostream>
using namespace std;

int SUM(int A[]){
  int s = 0;
  for (int i = 0; i<=999;i++){
  s = s + A[i];}
  return s;
}

int main(){
  int A[999];
  int k;
  int t;
  for (int j = 0; j<=999;j++){
  A[j] = 0;}
  cout << "enter the no. of elements in array(<1000 nos.): ";
  cin >> k;
  cout << "enter " << k << "elements: ";
  for (int l = 0; l < k; l++){
  cin >> t;
  A[l] = t;}
  int S = SUM(A);
  cout << "the sum is: " << S << endl;
  return 0;
}
