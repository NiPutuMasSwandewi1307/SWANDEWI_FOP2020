#include <iostream>
using namespace std;

int main(){
  int n;

  //Inpur you number
  cout<<"Input your number : ";
  cin>>n;

  //Formula
  {
  if (n%2==1)
    cout<<"Your number is odd";
  
  if (n==0)
      cout<<"Your number is zero! Doesn't mean odd or even";
    else
      cout<<"Your number is even";
    
  }
  return 0;
}