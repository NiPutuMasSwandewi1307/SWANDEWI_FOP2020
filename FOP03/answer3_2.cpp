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
  if ((time>=00.00)&&(time<=11.59))
  cout<<"\n Good Morning !";

  if ((time>=12.00)&&(time<=17.59))
  cout<<"\n Good Afternoon !";

  if ((time>=18.00)&&(time<=23.59))
  cout<<"\n Good Evening !";

  else 
  cout<<"Your time is wrong";
  }

  return 0;
}