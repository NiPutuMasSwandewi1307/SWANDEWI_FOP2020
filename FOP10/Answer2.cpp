#include <iostream>
using namespace std;

double temp1(double C, double F)
{
    F = (C*9/5)+32;
    return F;
}

double temp2(double C, double F)
{
    C = (F-32)*5/9;
    return C;
}

int main (){
  char rand;
  double C;
  double F;
 
  //Input Your Number
  cout<<"Do you want Inpur in Celcius or Farenheit? (C/F)\n";
  cin>>rand;

  //Choose the Formula
  switch (rand)
  {
    case 'C':
    //If user input temperature in Celcius
    cout<<"Input temperature in Celcius : ";
    cin>>C;

    //Compute temperatur of Farenheit
    cout<<"The Temperatur in Farenheit is ";
    cout<<temp1(C,F)<<endl;
    break;

    case 'F':
    //If user input temperature in Farenheit
    cout<<"Input temperature in Farenheit : ";
    cin>>F;

    //Compute temperatur of Celcius
    cout<<"The Temperatur in Celcius is ";
    cout<<temp2(C,F)<<endl;
    break;

    default:
        cout<<"\nError! The simbol is wrong";
        break;
  }
return 0;
}
