#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // Display the header of the table 
  cout << left << setw(7) << "Nama" << setw(5) << "FOP" << setw(15) << "Linear Algebra" << setw(10) << "Calculus" << setw(5) << "Discrete Math" << endl;

  // Display score of John
  cout <<setw(7) << "John" << setw(5) << 90 << setw(15) << 90 << setw(10) << 70 << setw(5) << 80 << endl;

  //Diplay score of Flora
  cout <<setw(7) << "Flora" << setw(5) << 87 << setw(15) << 93 << setw(10) << 92 << setw(5) << 70 << endl;

  //Display score of Martha
  cout << setw(7) << "Martha" << setw(5) << 72 << setw(15) << 100 << setw(10) << 78 << setw(5) << 90 << endl;

  return 0;
}