#include <iostream>
using namespace std;

int main (){
    int i=1;
    while (i<=50){
        if (i%3==0 && i%5==0){
            cout<<"ZIPZAP\n";
        }   
            else if (i%5==0){
            cout<<"ZAP\n";
        }   else if (i%3==0){
            cout<<"ZIP\n";
        } 
        else{
            cout<<i<<endl;
        }
        i++;
    }
}