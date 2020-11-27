
#include <iostream>
using namespace std;

//Membuat fungsi untuk menghitung jumlah bilangan genap dan ganjil
void CountingEvenOdd(int myList[], int arr_size)
{
    int even_count = 0;
    int odd_count = 0;
 
    // Lopp to Read all the values in the array myList
    for (int i = 0; i < arr_size; i++) {
         
    //Checking the value odd or even
    if (myList[i] % 2 == 1)
        odd_count++;
    else
        even_count++;
    }
 
    cout << "Number of even elements = " << even_count;
    cout << "\nNumber of odd elements = " << odd_count;
}
 
int main()
{
    int myList[5] = {4, 7, 12, 5, 2};
    int n = sizeof(myList) / sizeof(myList[0]);
       
    // Function Call
    CountingEvenOdd(myList, n);
    return 0;
}