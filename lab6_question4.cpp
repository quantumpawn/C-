#include <iostream>
using namespace std;
int main(){
  char str[10];
  char * p;
  cout << "enter name: ";
  cin >> str;
  cout << "the characters of the string are(by normal method): ";
  for (int i = 0; i<10;i++){
  cout << str[i] << " ";}
  p = &str[0];
  cout << "by pointers: ";
  while (*p != '\0'){
  cout << *p << " ";
  p++;}


  return 0;
}
