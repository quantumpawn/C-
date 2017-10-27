#include <iostream>
using namespace std;

int main(){
  char str[20];
  char * p;
  char * q;
  cout << "enter string: ";
  cin >> str;
  p = &str[0];
  while (*p != '\0'){
    q = p;
    while (*q != '\0'){
    cout << *q;
    q++;}
    p++;
    cout << endl;
  }
return 0;
  
}
