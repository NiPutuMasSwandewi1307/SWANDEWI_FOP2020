#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
  //Declare num to floar with random number
  srand (time(0));
  double num1 = rand() % 100;
  for (double num1=0; num1 <10;num1++){
  }
  double num2 = rand() % 100;
  for (double num2=0; num1 <10;num2++){
  }
  int answersystem, answeruser;
  char op;
  
    
  //Input the number
  cout<<"Angka pertama : "<<num1<<endl;
  cout<<"Angka kedua : "<<num2<<endl;

  //The operation
  cout<<"\n Select the operation that you need (+,-,*,/) = ";
  cin>>op;

  //Switch statement begins
    switch (op) {

      // If user enter +
      case '+':
        cout<<"The answer is = ";
        cin>>answeruser;
        answersystem=num1+num2;
        if (answeruser!=answersystem){
          cout<<"Your answer is wrong. The correct answer is = "<<answersystem<<endl;
        }
        break;
      
      // If user enter -
      case '-':
        cout<<"The answer is = ";
        cin>>answeruser;
        answersystem=num1-num2;
        if (answeruser!=answersystem){
          cout<<"Your answer is wrong. The correct answer is = "<<answersystem<<endl;
        }
        break;

      // If user enter *
      case '*':
        cout<<"The answer is = ";
        cin>>answeruser;
        answersystem=num1*num2;
        if (answeruser!=answersystem){
          cout<<"Your answer is wrong. The correct answer is = "<<answersystem<<endl;
        }
        break; 

      // If user enter +
      case '/':
      if (num2==0){
        cout<<"\n Undefined result";
      }
      else {
        cout<<"The answer is = ";
        cin>>answeruser;
        answersystem=num1+num2;
        if (answeruser!=answersystem){
          cout<<"Your answer is wrong. The correct answer is = "<<answersystem<<endl;
        }
      }
        break;

      //If the operator other than +,-,*,/
      default:
        cout<<"\nError! The operator is wrong";
        break;
    }
    return 0;

}