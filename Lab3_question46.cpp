#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int a,b,lcm;
  cout <<"enter 2 nos.: ";
  cin >> a >> b;
  for (int i = max(a,b); i<=(a*b) ; i++){
    if ((i%a == 0)&&(i%b == 0)){
      lcm = i;
      break;
    }
  }
  cout << lcm;
  return 0;
}

