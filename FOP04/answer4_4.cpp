#include <iostream>
#include <math.h>
using namespace std ;

int main ()
{
    float weight,height;
    float BMI;
    
    //Input your score
    cout<<"Input your weight (kg) :";
    cin>>weight;
    cout<<"Input your height (m) :";
    cin>>height;
    
    //Formula the score
    BMI = weight/pow(height,2);

    //Grade od the score
    if (BMI<=18.5){
        cout<<"Your are Underweight";
    }
    if ((BMI>18.5)&&(BMI<25)){
        cout<<"Your are Normal";
    }
    if ((BMI==25)&&(BMI<30)){
        cout<<"Your are Overweight";
    }
    if (BMI>=30){
        cout<<"Your are Obesity";
    }
    return 0;
}
    

   