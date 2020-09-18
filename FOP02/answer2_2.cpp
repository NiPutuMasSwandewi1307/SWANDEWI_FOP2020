#include <iostream>
using namespace std;

int main (){
  int agethisyear,agenextyear,agelastyear;

  //Input your age
  cout<<"Input your age this year : ";
  cin>>agethisyear;

  //Formula of The age
  agenextyear = agethisyear + 1;
  agelastyear = agethisyear -1;

  //Compute your age
  cout<<"Your age next year : ";
  cout<<agenextyear<<endl;

  cout<<"Your age last year :";
  cout<<agelastyear<<endl;
  return 0;
}
