#include <iostream>
#include <array>
using namespace std;

//Membuat fungsi untuk display
void display(int myList[5])
{
    cout<<"First element is "<<myList[0]<<endl;
    cout<<"Last element is "<<myList[4]<<endl;
    cout<<"Fourth element is "<<myList[3]<<endl;
}


int main()
{
    //Mendeklarasi angka-angka dalam kelompok
    int myList[5] = {4, 7, 12, 5, 2};

    //Memanggil fungsi
    display(myList);
    return 0;
}