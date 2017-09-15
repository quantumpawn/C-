#include <iostream>
using namespace std;
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

int output(int a, int b){
  for (int i =a ;i<=b;i++){
    int x = perfect(i);
    if (x==1){
    cout << i << endl;}
  }
return 0;}

int main(){
  int a,b;
  cout << "enter range: ";
  cin >> a >> b;
  output(a,b);
  return 0;
}
