#include <iostream>
using namespace std;
int main()
{
  int d;
  float w,y;
  cout << "enter no. of days: ";
  cin >> d;
  w = float(d)/7;
  y = float(d)/365; //assuming not a leap year
  cout <<"no. of weeks: " << w << " no. of years: "<<y;
  return 0;
  
}
