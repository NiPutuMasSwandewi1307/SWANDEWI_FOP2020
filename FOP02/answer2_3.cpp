#include <iostream>
#include <math.h>
using namespace std;

int main (){
  double radius;
  double volume;
  double surface;

  //Inpute the radius of sphere
  cout<<"Input the radius of sphere : ";
  cin>>radius;

  //Formula of sphere
  volume = 4/3*M_PI* pow(radius,3);
  surface = 4*M_PI*pow(radius,2);

  //Compute volume and surface of sphere
  cout<<"The Sphere's volume is ";
  cout<<volume<<endl;

  cout<<"The Sphere's surface is ";
  cout<<surface<<endl;
  return 0;
}
