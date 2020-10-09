#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
  int answersystem, answeruser;
  int question = 1;
  int score = 0;
  char op;

  //Declare num to floar with random number
    while (question<=10){
      double num1 = rand() % 100;  
       cout<<"Angka pertama : "<<num1<<endl;
      double num2 = rand() % 100;
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
        answersystem=num1/num2;
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
    if (answeruser==answersystem){
      score++;
        cout<<"Your answer is Correct\n";
    }

    cout<<"THE NEXT QUESTION\n";
    question++;
    } 
    
    cout<<"Your final score is "<<score<<" out of 10\n";
    return 0;

}