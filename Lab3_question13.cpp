#include <iostream>
using namespace std;
int main(){
  int m,T;
  cout << "enter total amount: ";
  cin >> T;
  cout << "enter denomination: ";
  cin >> m;
  cout << "no. of notes: " << float(T)/m << endl;
  return 0;
} 
