#include <iostream>
using namespace std;
int fact(int n){
  int h = 1;
  for (int i = 1;i<=n;i++){
  h = h*i;}
  return h;
}

int strong(int n){
  int sum=0;
  int a = n;
  while (a>0){
    int d = a%10;
    sum = sum + fact(d);
    a = a/10;
  }
  if (sum == n){
  return 1;}
  else{
  return 0;}
}
int range(int a,int b){
  for (int i = a;i<=b;i++){
    int x = strong(i);
    if (x==1){
    cout << i << endl;} 
  }
  return 0;
}
int main(){
  int a,b;
  cout <<"enter range: ";
  cin >> a >> b;
  range(a,b);
  return 0;
}
