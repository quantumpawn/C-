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

int prime(int a){
  int b =0;
  for (int i = 2; i<a; i++){
    if (a%i == 0){
      b = 1;
      break;}
  }
  if (b == 0){
  return 1;
  }
  else{
  return 0;}
}

int perfect(int a){
  int sum=0;
  for (int i=1;i<a;i++){
    if (a%i == 0){
    sum = sum + i;}
  }
  if (sum == a){
  return 1;}
  else{
  return 0;}
}

int main(){
  int x;
  cout << "enter: ";
  cin >> x;
  int A = arm(x);
  int pr = prime(x);
  int pe = perfect(x);
  if (A == 1){
  cout << "armstron" << endl;}
  else{
  cout << "not armstrong" << endl;}
  if (pr == 1){
  cout << "prime"<<endl;}
  else{
  cout << "not prime"<<endl;}
  if (pe == 1){
  cout << "perfect"<<endl;}
  else{
  cout << "not perfect"<<endl;}
  return 0;
}


