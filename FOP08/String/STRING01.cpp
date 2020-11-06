#include <iostream>
#include <string>
using namespace std;

int main(){

  //deklarasi di awal
  string x;
  int jumlah;

  //User input string
  cout << "Masukkan sebuah string : ";

  //The formula to compute the character
  getline(cin, x);
  jumlah = x.length();

  //Output for display in console
  cout << "Jumlah karakter adalah " << jumlah << endl;

  return 0;
}