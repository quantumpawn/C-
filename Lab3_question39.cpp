#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
  cout << "enter no: ";
  cin >> n;
  while (n>0){
    d = d%10;
    if (d == 0){
      a = a + 1;
    }
    else if (d == 1){
      b = b + 1;
    }
    else if (d == 2){
      c = c + 1;
    }
    else if (d == 3){
      d = d + 1;
    }
    else if (d == 4){
      e = e + 1;
    }
    else if (d == 5){
      f = f + 1;
    }
    else if (d == 6){
      g = g + 1;
    }
    else if (d == 7){
      h = h + 1;
    }
    else if (d == 8){
      i = i + 1;
    }
    else if (d == 9){
      j = j + 1;
    }
    n = n/10;
  }
  cout << a << b << c << d << e << f <<g << h << i <<j << endl;
  return 0;
}
