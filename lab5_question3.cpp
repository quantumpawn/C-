#include <iostream>
using namespace std;

int bsortup(int A[], int L){
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

int bsortdown(int A[], int L){
  for (int i =0; i<L;i++){
    for (int j = i; j<L;j++){
      if (A[i]<A[j]){
      int s = A[i];
      A[i] = A[j];
      A[j] = s;}
    }
  }
  return 1;
}

int klarge(int A[],int L, int k){
  int M= 0;
  if (k>L){
  cout << "not possible!" << endl;
  return 1;}
  else{
    bsortdown(A,L);
    M = A[k-1];
    cout << M << endl;
    return 1;
    
    
  }
}


int ksmall(int A[],int L, int k){
  int M= 0;
  if (k>L){
  cout << "not possible!" << endl;
  return 1;}
  else{
    bsortup(A,L);
    M = A[k-1];
    cout << M << endl;
    return 1;
    
    
  }
}

int main(){
  int A[1000];
  int L;
  int s,k;
  for (int i = 0; i<1000;i++){
  A[i]= 0;}
  cout << "enter length: ";
  cin >> L;
  cout << "enter k: ";
  cin >> k;
  for (int j = 0; j<L; j++){
  cin >> s;
  A[j] = s;}

  cout << k << "th largest val.: ";
  klarge(A,L,k);
  cout << k << "th smallest val.: ";
  ksmall(A,L,k);
  return 0;
}
