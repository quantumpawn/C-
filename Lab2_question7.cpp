#include <iostream>
using namespace std;
int main()
{
  float x,y;
  cout << "enter 2 angles of a triangle(in deg.): ";
  cin >> x >> y;
  cout << "the 3rd angle: " << (180 - x - y);
  return 0;
}
