#include<iostream>
using namespace std;

//Function definition (sum, substract,multiply,division)
int sum(int a, int b)
{
	int sum=a+b;
	return sum;
}

int sub(int a, int b)
{
    int sub=a-b;
    return sub;
}

int mul(int a, int b)
{
    int mul=a*b;
    return mul;
}

int division(int a, int b)
{
    int div=a/b;
    return div;
}

int main()
{
//Input number
	int x,y,result1,result2,result3,result4;
	cout<<"Enter first number : ";
	cin>>x;
	cout<<"Enter second number : ";
	cin>>y;

//Call the function
	result1=sum(x,y);
    result2=sub(x,y);
    result3=mul(x,y);
    result4=division(x,y);

//Output
    cout<<"---The Result---"<<endl;
	cout<<"The sum is : "<<result1<<endl;
    cout<<"The substract is : "<<result2<<endl;
    cout<<"The multiply is : "<<result3<<endl;
    cout<<"The division is : "<<result4<<endl;

	return 0;
}


