#include <iostream>
using namespace std;

int max(int A[],int L){
  int M = -100000;
  for (int i = 0; i<L;i++){
  if (A[i] > M){
  M = A[i];}
  }
  return M;
}

int min(int A[],int L){
  int m = 100000;
  for (int i = 0; i<L;i++){
  if (A[i] < m){
  m = A[i];}
  }
  return m;
}

int merge(int A[], int B[], int a, int b){
  for (int i = a; i<(a+b);i++){
  A[i] = B[i-a];}
  return 1;
}

int main(){
  int A[2000];
  int B[1000];
  int a,b,s,t;
  cout << "enter length of 1st array(<1000): ";
  cin >> a;
  cout << "enter elements: ";
  for (int i = 0; i<a;i++){
  cin >> s;
  A[i] = s;}
  cout << "enter length of 2nd array(<1000): ";
  cin >> b;
  cout << "enter elements: ";
  for (int i = 0; i<b;i++){
  cin >> t;
  B[i] = t;}
  merge(A,B,a,b);
  cout << "max. of merged array: " << max(A,(a+b)) << endl;
  cout << "min. of merged array: " << min(A,(a+b)) << endl;

}
