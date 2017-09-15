#include <iostream>
#include <cmath>
using namespace std;
int arm(int a){
  int b=0,sum=0;
  int c = a;
  int d = a;
  while (c>0){
    b = b + 1;
    c = c/10;
  }
  while (a>0){
    sum = sum + pow((a%10),b);
    a = a/10;
  }
  if (d == sum){
  return 1;}
  else{
  return 0;}
}

int output(int a, int b){
  for (int i =a ; i<=b;i++){
    int x = arm(i);
    if (x==1){
    cout << i << endl;}
  }
  return 0;
}

int main(){
  int a,b;
  cout << "enter range: ";
  cin >> a >> b;
  output(a,b);
  return 0;
}
