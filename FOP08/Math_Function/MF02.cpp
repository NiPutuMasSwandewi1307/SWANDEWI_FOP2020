#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double pi;
    pi = M_PI;
    double rad;
    double degree;

    //Formula asin
    rad = asin (0.58);
    degree = rad * (180/pi);
    cout<<"Nilai dari Asin 0.58 = "<<degree<<endl;
    
    //Formula acos
    rad = acos (0.29);
    degree = rad * (180/pi);
    cout<<"Nilai dari Acos 0.29 = "<<degree<<endl;

    //Formula atan
    rad = atan (0.72);
    degree = rad * (180/pi);
    cout<<"Nilai dari Atan 0.72 = "<<degree<<endl;

    double jawaban4;
    jawaban4 = sqrt (156-12);
    cout << "Nilai dari Akar dari 156-12 = " << jawaban4 << endl;

    return 0;
}