#include <iostream>
using namespace std ;

int main (){
    int age;

    //Input your age
    cout<<"Input your age : ";
    cin>>age;

    //Formula of age
    if ((0<age)&&(age<12)){
      cout<<"You are child";
    }
    if ((12<=age)&&(age<18)){
      cout<<"You are teenager";
    }
    if (age>=18){
      cout<<"You are adult";
    }
    else{
        cout<<"There's no age using minus number";
    }
    
    return 0;
}