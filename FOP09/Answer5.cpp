#include <iostream>
using namespace std;

//Create the function
void fotocopyString(string bahan, int perulangan)
{
    for(in i=0; i<perulangan; i++){
        cout<<bahan<<i<<endl;
    }
}

//main
int main ()
{
    string inputstring;
    int inputInt;

//Ask user to input data
    cout<<"Masukan String :";
    cin>>inputstring;
    cout<<"Masukan jumlah perulangan :";
    cin>>inputInt;

//Output
    fotocopyString(inputstring, inputInt);
    return 0;
}