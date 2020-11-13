#include <iostream>
using namespace std;

//Create a Function
int ceil(double inNum)
{
    int returnNum;
    returnNum = inNum;
    returnNum += 1;
    
    return returnNum;
}

int floor(double inNum)
{
    int returnNum;
    returnNum = inNum;
    
    return returnNum;
}

double squareroot(double n)
{
    double a = n;
    double b = 1;

    while (a>b){
        a = (a+b)/2;
        b = n/a;
    }
    return a;
}

int pow(int inNum, int powNum)
{
    int result = inNum;

    for(int i = 1; i < powNum; i++){
        result *= inNum;
    }
    
    return result;
}

//main
int main (){
    double num1;
    double num2;
    double thepow;

//Ask user to input the number
    cout<<"Please input number that you want to the ceil, floor and squareroot below\n";
    cin>>num1;
    cout<<"Please input number that you want know the pow\n";
    cout<<"The number : \n";
    cin>>num2;
    cout<<"The pow : \n";
    cin>>thepow;

//The First Output
    cout<<"The ceil of "<<num1<<" is "<<ceil(num1)<<endl;
    cout<<"The floor of "<<num1<<" is "<<floor(num1)<<endl;

    cout<<"---Next result---"<<endl;
 // The Second Output
    cout<<"The squareroot of "<<num1<<" is "<<squareroot(num1)<<endl;
    cout<<"The pow of "<<num2<<"to"<<thepow<<" is "<<pow(num2, thepow)<<endl;

    return 0;
}