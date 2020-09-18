#include <iostream>
#include <math.h>
using namespace std;

int main (){
  double C;
  double F;
 
  //Inpute temperature in Celcius
  cout<<"Input temperature in Celcius : ";
  cin>>C;

  //Formula to change Celcius to Farenheit
  F = (C * 9/5) + 32;

  //Compute temperatur of Farenheit
  cout<<"The Temperatur in Farenheit is ";
  cout<<F<<endl;
  return 0;
}
