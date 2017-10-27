#include <iostream>
using namespace std;
int main(){
  int arr[10];
  int * p;
  int b;
  cout << "enter values: ";
  for (int j = 0; j<10;j++){
  cin >> b;
  arr[j] = b;}
  cout << "the elements are(by pointer method): "; 
  p = &arr[0];
  while (*p != arr[9]){
    cout << *p << " ";
    *p = *p + 1;
  }
  cout << *p << endl;
  cout << "the elements are(by normal method): ";
  for (int i =0 ; i<10;i++){

  cout << arr[i] << " ";}
  return 0;
  
}
