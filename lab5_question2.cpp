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

float avg(int A[],int L){
  int s = 0;
  for (int i = 0; i<=L;i++){
  s = s + A[i];}
  return float(s)/L;
}

int bsort(int A[], int L){
  for (int i =0; i<L;i++){
    for (int j = i; j<L;j++){
      if (A[i]>A[j]){
      int s = A[i];
      A[i] = A[j];
      A[j] = s;}
    }
  }
  return 1;
}

int median(int A[], int L){
  if (L%2 == 0){
  bsort(A,L);
  cout << "median: " << A[L/2] << " " << A[(L/2)-1];}
  else{
  cout << "median: " << A[L/2];}
  return 1;
} 

int main(){
  int A[1000];
  int L;
  int e;
  for (int i = 0;i<1000;i++){
  A[i] = 0;}
  cout << "input length of array(<1000): ";
  cin >> L;
  cout << "enter elements: ";
  for (int j = 0; j<L;j++){
  cin >> e;
  A[j] = e;
  }
  cout << "max. element: " << max(A,L) << endl;
  cout << "min. element: " << min(A,L) << endl;
  cout << "mean: " << avg(A,L) << endl;
  median(A,L);
  return 0;

}

