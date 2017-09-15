#include <iostream>
using namespace std;
float cube(float x){
  return x*x*x;
}

int main(){
  float a;
  cout << "enter: ";
  cin >> a;
  float x = cube(a);
  cout << "cube is: " << x << endl;
  return 0;
}
