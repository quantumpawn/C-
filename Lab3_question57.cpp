#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n,f1=0,f2=1,fib=0;
  cout << "enter: ";
  cin >> n;
  cout << f1<<endl;
  cout << f2<<endl;
  for (int i=1;i<=n-2;i++){
    fib = f1 + f2;
    f1 = f2;
    f2 = fib;
    cout << f2<<endl;
  }
  
  
  return 0;
   
}
