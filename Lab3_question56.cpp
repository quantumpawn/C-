#include <iostream>
#include <cmath>
using namespace std;
int fact(int n){
  int h = 1;
  for (int i = 1;i<=n;i++){
  h = h*i;}
  return h;
}
int main(){
  int n;
  cout << "enter: ";
  cin >> n;
  for (int i = 1;i<=n;i++){
  int sum = 0;
  int a = i;
  while (a>0){
    int d = a%10;
    sum = sum + fact(d);
    a = a/10;
  }
  if (sum == i){
  cout << i <<endl;}}
  return 0;
   
}
