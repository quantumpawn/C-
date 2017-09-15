#include <iostream>
using namespace std;
void Grade(float(x)){
  if (x>=0.9){
    cout << 'A'<< ' ';}
  else if ((x>=0.8)&&(x<0.9)){
    cout << 'B'<< ' ';}
  else if ((x>=0.7)&&(x<0.8)){
    cout << 'C'<< ' ';}
  else if ((x>=0.6)&&(x<0.7)){
    cout << 'D'<< ' ';}
  else if ((x>=0.4)&&(x<0.6)){
    cout << 'E' << ' ';}
  else {
  cout << 'F'<< ' ';}
}
int main(){
  float P,C,B,M,Cs,p,c,m,b,cs;
  cout << "enter marks in 5 subjects(P,C,M,B,Cs) : ";
  cin >> P >> C >> M >> B >> Cs;
  p = P/100;
  c = C/100;
  m = M/100;
  b = B/100;
  cs = Cs/100;
  cout << "grades in P,C,M,B,Cs: ";
  Grade(p);  
  Grade(c);
  Grade(m);
  Grade(b);
  Grade(cs);
  return 0;
}
