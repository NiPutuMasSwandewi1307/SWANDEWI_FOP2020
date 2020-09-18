#include <iostream>
using namespace std;

int main (){
  int agethisyear,agenextyear,agelastyear,i;

  //Input your age
  cout<<"Input your age this year : ";
  cin>>agethisyear;

  //Formula of The age
  agenextyear = agethisyear + (++i);
  agelastyear = agethisyear - (i--);

  //Compute your age
  cout<<"Your age next year : ";
  cout<<agenextyear<<endl;

  cout<<"Your age last year :";
  cout<<agelastyear<<endl;
  return 0;
}
