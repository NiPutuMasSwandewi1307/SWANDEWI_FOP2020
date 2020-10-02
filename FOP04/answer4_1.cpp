#include <iostream>
using namespace std ;

int main (){
    int age;

    //Input your age
    cout<<"Input your age : ";
    cin>>age;

    //Formula of age
    if (0<age<12){
        cout<<"You are child";
    }
    if (12<=age<18){
        cout<<"You are teenager";
    }
    if (age<0){
        cout<<"There's no age using minus number";
    }
    else
        cout<<"You are adult";
    return 0;
}