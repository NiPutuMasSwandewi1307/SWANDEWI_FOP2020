#include <iostream>
using namespace std;

int main() {
  int a,b,c;

  //Step 1 Input A Value
  cout<<"Input A Value : ";
  cin>>a;
  
  cout<<"Inpute B Value : ";
  cin>>b;

  //Step 2 The Formula
  c=a;
  a=b;
  b=c;
  
  //Swap the variable
  cout<<"After I Swap The Value of A is  "<<a<<" and B is "<<b;
  return 0;
}
