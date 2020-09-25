#include <iostream>
using namespace std;

int main() {
  int x;

  //Step 1 Input Hour
  cout<<"Input hour : ";
  cin>>x;
  
  //Step 2 The formula
  if ((x>=0)&&(x<=12)){
    cout<<"Now is "<<x<<" AM";
  }

  else if ((x>=13)&&(x<=24)){
    cout<<"Now is "<<x-12<<" PM";
  }

  else{
    cout<<"You're Input Wrong Number";
  }
  return 0;
}
