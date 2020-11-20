#include <iostream>
using namespace std;


// Find the max between two int values 
int max(int num1, int num2)
{
  if (num1 > num2)
    return num1;
  else
    return num2;
}

// Fin the min between two int values
int min(int num1, int num2)
{
  if (num1 < num2)
    return num1;
  else
    return num2;
}

// Find the max between two double values 
double max(double num1, double num2)
{
  if (num1 > num2)
    return num1;
  else
    return num2;
}

// Find the min between two double values 
double min(double num1, double num2)
{
  if (num1 < num2)
    return num1;
  else
    return num2;
}

// Fin the max among three double values 
double max(double num1, double num2, double num3)
{
  return max(min(num1, num2), num3);
}

// Fin the min among three double values 
double min(double num1, double num2, double num3)
{
  return min(min(num1, num2), num3);
}

int main()
{
  char rand;
  double num1;
  double num2;
  double num3;
 
  //Input Your Number
  cout<<"Berapa angka yang ingin anda masukan? (2/3)\n";
  cin>>rand;

  //Choose how many number
  switch (rand)
  {
    //If user enter 2
    case '2':
      cout<<"Ok, please enter your number\n";
      cout<<"First number : ";
      cin>>num1;
      cout<<"Second number : ";
      cin>>num2;
      cout<<"The maximum number is "<<max(num1, num2)<<endl;
      cout<<"The minimum number is "<<min(num1, num2)<<endl;
      break;
    
    case '3':
      cout<<"Ok, please enter your number\n";
      cout<<"First number : ";
      cin>>num1;
      cout<<"Second number : ";
      cin>>num2;
      cout<<"Third number : ";
      cin>>num3;
      cout<<"The maximum number is "<<max(min(num1, num2), num3)<<endl;
      cout<<"The minimum number is "<<min(min(num1, num2), num3)<<endl;
      break;

    default:
        cout<<"\nError! The number is wrong";
        break;
  }
  
  return 0;
}

