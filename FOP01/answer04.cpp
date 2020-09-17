#include <iostream>
using namespace std;

int main() {
  double a,b,c;
  double total;
  double average;

  //Step 1 Input A,B,C Value
  cout<<"Input A Value : ";
  cin>>a;
  
  cout<<"Inpute B Value : ";
  cin>>b;

  cout<<"Inpute C Value : ";
  cin>>c;

  
  //Step 2 The Formula
  total = a+b+c;
  average = total/3;
  
  //The Result
  cout<<"The total is ";
  cout<<total<<endl;

  cout<<"The average is ";
  cout<<average<<endl;
  return 0;
}
