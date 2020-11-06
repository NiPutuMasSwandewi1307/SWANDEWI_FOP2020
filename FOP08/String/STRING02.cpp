#include <iostream>
#include <string>
using namespace std;

int main(){

  //deklarasi di awal
  string kalimat1("My name is");
  string kalimat2("Have a");

  //Insert strings into a strings
  kalimat1.insert(10," John Trump");
  kalimat2.insert(6, " good day");

  //Output for display in console
  cout << "After we insert strings to string \n";
  cout << kalimat1 << endl;
  cout << kalimat2 << endl;
  
  return 0;
}