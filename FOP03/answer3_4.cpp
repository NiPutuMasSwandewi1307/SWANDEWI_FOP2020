#include <iostream>
using namespace std;

int main (){
  //op it's mean operation
  //x and y is the number
  char op;
  double num1, num2;

  //Input the number
  cout<<"Input Your First Number : ";
  cin>>num1;
  cout<<"Input Your Second Number : ";
  cin>>num2;

  //The operation
  cout<<"\n Select the operation that you need (+,-,*,/) = ";
  cin>>op;

  //Switch statement begins
    switch (op) {

      // If user enter +
      case '+':
        cout<<num1+num2;
        break;
      
      // If user enter -
      case '-':
        cout<<num1-num2;
        break; 

      // If user enter *
      case '*':
        cout<<num1*num2;
        break; 

      // If user enter +
      case '/':
      if (num2==0){
        cout<<"\n Undefined result";
      }
      else {
        cout<<num1/num2;
      }

        break;
      
      //If the operator other than +,-,*,/
      default:
        cout<<"\nError! The operator is wrong";
        break;
    }
    return 0;

}