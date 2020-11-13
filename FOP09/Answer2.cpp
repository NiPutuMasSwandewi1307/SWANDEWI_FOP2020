#include <iostream>
using namespace std;

//Create the Function to Swap
void swap(int *a, int *b)
{
    int swap=*a;
    *a=*b;
    *b=swap;
}

string check(int x)
{
    if (x%2==0){
    return "even";
    }
    else{
    return "odd";
    }
}

int main() {
  int a;
  int b;
  int x;

//Step 1 Input a Value
  cout<<"Input Value A : ";
  cin>>a;
  cout<<"Inpute Value B : ";
  cin>>b;

//Call the function
  swap(a,b);
  
// Output the Swap of variable
  cout<<"After I Swap, value A is "<<a<<endl;
  cout<<"Value B is "<<b<<endl;

//Jeda
  cout<<"---Next we want to check your value odd or even---\n";

//Input Number for checking
  cout<<"Input Value X : ";
  cin>>x;
//Output
  cout<<"Your number is "<<check(x)<<endl;

  return 0;
}
