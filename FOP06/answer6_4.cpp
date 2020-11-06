#include <iostream>
using namespace std;

int main (){
    int row;
    int a,b;

    cout<<"Input Number of Row : \n";
    cin>>row;

    for (a=1; a<=row; a++){
        for (b=1; b<=a; b++){
        cout<<"*";
        }
        cout<<endl;
    }

    for (a=row-1; a>=0; a--){
        for (b=1; b<=a; b++){
            cout<<"*";
        } 
        cout<<endl;
    }
    return 0;
}