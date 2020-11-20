#include <iostream>
using namespace std;

//The function to compute the year, month, week and days
void Hitung(int year, int month, int week, int day)
{
    year=day/365;
    cout<<"The years is : "<<year<<endl;
    
    day=day%365;
    month=day/30;
    cout<<"The months is : "<<month<<endl;

    day=day%30;
    week=day/7;
    cout<<"The weeks is : "<<week<<endl;

    day=day%7;
    cout<<"The days is : "<<day<<endl;
}

int main()
{
    int year, month, week, day;

    //Input how many days
    cout<<"Input the days : ";
    cin>>day;

    //The result
    cout<<"Do you know how many years, months and days for "<<day<<endl;
    Hitung(year,month,week,day);

    return 0;   
}


