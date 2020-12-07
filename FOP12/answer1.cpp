#include<iostream>
#include<fstream>
using namespace std;

//Get the Information from "lab11_randnum.txt" File
int main() {
  int min,max;
  double average;
  int myArray[100];
  int sum=0;
  ifstream file("lab11_randnum.txt");
  for(int i=0; i<100; i++){
    file >> myArray[i];
  }


  //Find the Lowest of Number
  min=myArray[0];
  for(int i=0; i<100; i++){
    if(myArray[i]<min){
      min=myArray[i];
    }
  }

 //Find the Highest of Number
  max= myArray[0];
  for(int i=0; i<100; i++){
    if(myArray[i]>max){
      max=myArray[i];
    }
  }

  //Find the Average of Number
  sum=0;
  for(int i=0; i<100; i++){
    sum += myArray[i];
  }
  average=sum/100;
 
 //The Output
  cout << "Max is :"<<max<<endl;
  cout << "min is :"<<min<<endl;
  cout << "Average is :"<<average<<endl;

return 0;

}