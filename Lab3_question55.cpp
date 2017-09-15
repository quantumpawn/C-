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
  int n,sum=0;
  cout << "enter: ";
  cin >> n;
  int a = n;
  while (a>0){
    int d = a%10;
    sum = sum + fact(d);
    a = a/10;
  }
  if (sum == n){
  cout << "strong";}
  else{
  cout << "not strong";}
  return 0;
   
}
