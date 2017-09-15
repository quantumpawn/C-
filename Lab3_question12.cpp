#include <iostream>
using namespace std;
int main(){
  int mnth;
  cout << "enter month no.: ";
  cin >> mnth;
  if (mnth == 2){
    cout << "28 days";}
  else if (((mnth % 2 == 1)&&(mnth <= 7)) || ((mnth % 2 == 0)&&(mnth > 7))){
    cout << "31 days";}
  else{
    cout << "30 days";}
  return 0;
}
