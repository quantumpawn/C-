#include <iostream>
using namespace std;
int main()
{
  float lcm,lm,lkm;
  cout << "enter length in cm: ";
  cin >> lcm;
  lm = lcm/100;
  lkm = lm/1000;
  cout << "length in m: " << lm << " length in km: "<<lkm;
  return 0;
}
