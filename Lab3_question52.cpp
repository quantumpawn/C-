#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cout << "enter";
  cin >> n;
  for (int i=1;i<=n;i++){
  int a=0,sum=0;
  int c = i;
  int d = i;
  while (c>0){
    a = a + 1;
    c = c/10;
  }
  while (n>0){
    sum = sum + pow((n%10),a);
    n = n/10;
  }
  if (d == sum){
  cout << i;}}
  return 0;
  
}
