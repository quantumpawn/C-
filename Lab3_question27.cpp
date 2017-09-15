#include <iostream>
using namespace std;
int main(){
  int s=0,a=1;
  while (a<=100){
    s = s + a;
    a++;
  }
  cout << "sum: " << s;
  return 0;
}
