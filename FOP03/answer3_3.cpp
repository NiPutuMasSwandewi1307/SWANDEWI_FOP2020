#include <iostream>
using namespace std;

int main(){
  char H;
  cout<<"Input your alphabet : ";
  cin>>H;

  {
  if (H=='a' || H=='i' || H=='u' || H=='e' || H=='o')
  cout<<"Your character is vowel";

  else if (H=='1'||H=='2'||H=='3'||H=='4'||H=='5'||H=='6'||H=='7'||H=='8'||H=='9'||H=='0')
  cout<<"It is a number, not alphabet";
  
  else 
  cout<<"Your character is consonant";
  }
  return 0;
}
