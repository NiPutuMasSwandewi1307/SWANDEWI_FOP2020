#include <iostream>
using namespace std;

int main() {
  double diameter;
  double radius;
  double luas;
  double keliling;

  //Input d Value
  cout<<"Diameter lingkaran : ";
  cin>>diameter;
  
  //Circle Formula
  radius = (diameter/2);
  luas = (3.14 * radius * radius);
  keliling = (3.14 * diameter);

  //Compute the area and circumference
  cout<<"The radius of the circle is ";
  cout<<radius<<endl;
  
  cout<<"The area is ";
  cout<<luas<<endl;

  cout<<"The circumference is ";
  cout<<keliling<<endl;
  return 0;
}
