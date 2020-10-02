#include <iostream>
using namespace std ;

int main (){
    int month, year;

    //Input number of the month and the year
    cout<<"The the number of the month you would like to know to know if it's the month of leap year :";
    cin>>month;
    cout<<"\nAlso input the year : ";
    cin>>year;

    //Check when is the month of leap year
    switch(month)
    {
        case 1 :
            cout<<"\n January"<<year<<", it has 31 days";
            break;

        case 2 :
        //Condition if this is leap year or not
            if (((year%4==0) && (year%100 !=0)) || (year%400==0)){
                cout<<"\nFebruary"<<year<<", it has 29 days";
            }
            else{
                cout<<"\nFebruary"<<year<<", it has 28 days";
            }
            break;
        
        case 3:
            cout<<"\n March"<<year<<", it has 31 days";
            break;

        case 4:
            cout<<"\n April"<<year<<", it has 30 days";
            break;
        
        case 5:
            cout<<"\n May"<<year<<", it has 31 days";
            break;

        case 6:
            cout<<"\n June"<<year<<", it has 30 days";
            break;
        
        case 7:
            cout<<"\n July"<<year<<", it has 31 days";
            break;

        case 8:
            cout<<"\n August"<<year<<", it has 31 days";
            break;

        case 9:
            cout<<"\n September"<<year<<", it has 30 days";
            break;
        
        case 10:
            cout<<"\n October"<<year<<", it has 31 days";
            break;
        
        case 11:
            cout<<"\n November"<<year<<", it has 30 days";
            break;
        
        case 12:
            cout<<"\n December"<<year<<", it has 31 days";
            break;
    }
    return 0;
}
