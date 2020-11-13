#include<iostream>
#include <cmath>
using namespace std;

//Function definition (area and volume of circle)
double area(double r)
{
	return area =(pow(r,2))*M_PI;
}

double volume (double r)
{
    return volume=(4/3)*(pow(r,3))*M_PI;
}

int main()
{
    //Input number of radius
	double r;
	cout<<"Enter your radius of circle : ";
	cin>>r;
	
	//Output (area & volume of circle)
	cout<<"The area of circle : "<<area(r)<<endl;
    cout<<"The volume of circle : "<<volume(r)<<endl;
    return 0;
}


