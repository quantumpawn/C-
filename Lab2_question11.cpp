#include <iostream>
using namespace std;
int main()
{
  float P,R,T;
  cout << "enter P(principal),R(rate per annum),T(time): ";
  cin >> P >> R >> T;
  cout << "the simple interest is:" << P*R*T;
  return 0;
}
