#include <iostream>
using namespace std;
int main(){
  int b;
  cout << "enter: ";
  cin >> b;
  for (int i = 2;i<b;i++){
    if (b%i == 0){
      int a = 0;
      for (int j = 2; j<i;j++){
        if (i%j == 0){
        a = 1;
        break;}
        
      }
      if (a == 0){
        cout << i << endl;}
    }
  }
  return 0;
}

