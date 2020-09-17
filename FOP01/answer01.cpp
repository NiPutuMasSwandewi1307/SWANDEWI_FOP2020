#include <iostream>
using namespace std;

int main() {
  int x,y;
  int penjumlahan, pengurangan, perkalian, pembagian, modula;

  //Step 1 input x value
  cout<<"Input x Value : ";
  cin>>x;

  //Step 2 input y value
  cout<<"Input y Value : ";
  cin>>y;

  //Step 3 the formula
  penjumlahan = x + y;
  pengurangan = x - y;
  perkalian = x * y;
  pembagian = x / y;
  modula = x % y;

  //Step 4 Compute the addition,subtraction 
  cout<<"x + y = ";
  cout<<penjumlahan<<endl;

  cout<<"x - y = ";
  cout<<pengurangan<<endl;

  cout<<"x * y = ";
  cout<<perkalian<<endl;

  cout<<"x / y = ";
  cout<<pembagian<<endl;

  cout<<"x % y = ";
  cout<<modula<<endl;
  return 0;

}
