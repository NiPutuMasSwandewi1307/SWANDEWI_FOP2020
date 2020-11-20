#include <iostream>
using namespace std;

//The Function of Compute The Number
int penjumlahan(int nilai)
{
    int num;
    int sum = 0;

    while(nilai>0)
    {
        num=nilai%10;
        sum+=num;
        nilai=nilai/10;
    }
    return sum;
}

int main()
{
    int num;
    
    cout<<"Input Your Number : ";
    cin>>num;
    cout<<"The result is = "<<penjumlahan(num)<<endl;
}