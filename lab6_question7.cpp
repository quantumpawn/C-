#include <iostream>
using namespace std;
char strCPY (char str1[40], char str2[40]){
  for (int i = 0; i<40; i++){
  str2[i] = str1[i];}
  return str2[40];
}

}
int main(){
  char str1[40];
  char str2[40];
  char str3[40];
  cout << "enter string: ";
  cin >> str1;
  strCPY(str1,str2);
  cout << "original string: " << str1 << endl;
  cout << "copied string: " << str2 << endl;
  return 0;
}
