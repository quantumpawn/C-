#include <iostream>
using namespace std;
int main()
{
  float a,b,c,d,e,T,A,P;
  cout << "enter marks of student in 5 subj.(out of 10): ";
  cin >> a >> b >> c >> d >>e;
  T = a + b + c + d + e;
  A = float(T)/5;
  P = float(T/50)*100 //full marks for each subj. is 10
  cout <<"total: " << T << " Average: "<< A << " Percentage: " <<P;
  return 0;
}
