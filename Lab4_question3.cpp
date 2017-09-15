#include <iostream>
using namespace std;
float max(float a,float b){
  if (a>b){
  return a;}
  else{
  return b;}
}
float min(float a,float b){
  if (a<b){
  return a;}
  else{
  return b;}
}
int main(){
  float a,b;
  cout << "enter 2 nos.(a!=b): ";
  cin >> a >> b;
  float Max = max(a,b);
  float Min =  min(a,b);
  cout << "maximum is: " << Max << " minimum is: " << Min << endl;
  return 0;

}
