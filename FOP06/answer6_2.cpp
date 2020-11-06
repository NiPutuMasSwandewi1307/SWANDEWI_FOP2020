#include <iostream>
using namespace std;

int main (){
    int a,b,n;
    cout<<"Input the number : \n";
    cin>>n;
    for (a=1; a<=n; a++){
        for (b=1; b<=n; b++){
            cout<<a*b<<" ";
        }
        cout<<endl;
    }
    return 0;
}