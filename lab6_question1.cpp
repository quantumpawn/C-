#include <iostream>
using namespace std;

int main(){
  int a;
  float b;
  char c;
  bool d;
  int * A;
  float * B;
  char * C;
  bool * D;
  cout << "enter int,float,char,bool: ";
  cin >> a >> b >> c >> d;
  A = &a;
  B = &b;
  C = &c;
  D = &d;
  cout << "sizes of variables: " << sizeof(a) << " " << sizeof(b) << " " << sizeof(c) << " " << sizeof(d) << endl;
  cout << "sizes of pointers: " << sizeof(A) << " " << sizeof(B) << " " << sizeof(C) << " " << sizeof(D) << endl;
  return 0;
}
