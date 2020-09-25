#include <iostream>
using namespace std;

int main(){
  //time = the time right now
  double time;

  //Input the time
  cout<<"\n What time is it? : ";
  cin>>time;

  //The formula to give a greeting correspond with the time
  {
  if ((time>=00)&&(time<=11))
  cout<<"\n Good Morning !";

  else if ((time>=12)&&(time<=17))
  cout<<"\n Good Afternoon !";

  else if ((time>=18)&&(time<=23))
  cout<<"\n Good Evening !";
  
  else 
  cout<<"Your time is wrong";
  }

  return 0;
}