#include <iostream>
using namespace std;

//Create a Function
void greeting(string nama)
{
    cout<<"Hai !!"<<nama<<" Senang bertemu denganmu :)";
}

//main
int main() {
  string a;

//Ask user about her/his name and input it
  cout<<"Hallo namamu siapa? ";
  cin>>a;
  

//The output
  greeting(a);
  return 0;
}
