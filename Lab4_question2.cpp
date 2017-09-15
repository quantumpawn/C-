#include <iostream>
using namespace std;
float diameter(float r){
  return 2*r;
}
float circum(float r){
  return 2*3.1415*r;
}
float area(float r){
  return 3.1415*(r*r);
}

int main(){
  float x;
  cout << "enter: ";
  cin >> x;
  float D = diameter(x);
  float C = circum(x);
  float A = area(x);
  cout << "diameter: " << D << endl;
  cout << "circumference: "<<C << endl;
  cout << "area: "<< A << endl;
  return 0;
}
