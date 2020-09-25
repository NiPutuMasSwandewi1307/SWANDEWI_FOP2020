#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
  //Declare num to floar with random number
  srand(time(NULL));
  double num = rand() % 100, answer;

  //Display request input and assign to answer
  cout<<"Hello Welcome to the Mini Games\n"
      <<"How to play this game???\n"
      <<"Guess the correct number, the range is from 1-100! \n"
      <<"So what's my correct number?\n";
  cin>>answer;

  //Make a condition range 1-100
  if ((answer>=1)&&(answer<=100)){
    if (num==answer){
      cout<<"Yeay! Great joob, you can guess the correct number\n";
    }
    else if (num<answer){
      cout<<"Hmm, your number is to high, my number is = "<<num<<endl;
    }
  }
  else {
    cout<<"I said that the number's range is 1-100!\n";
  }
  return 0;
}