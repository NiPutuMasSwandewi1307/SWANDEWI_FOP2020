#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double pi = M_PI;
    
    //Nilai variabel x
    double x = 37;
    double jawaban1;
    jawaban1 = sin (x * (pi/180));
    cout << "Nilai dari sin 37 = "<< jawaban1 << endl;

    //Nilai variabel y
    double y = 53;
    double jawaban2;
    jawaban2 = cos (y * (pi/180));
    cout << "Nilai dari cos 53 = " << jawaban2 << endl;

    //Nilai variabel z
    double z = 60;
    double jawaban3;
    jawaban3 = tan (z * (pi/180));
    cout << "Nilai dari tan 60 = " << jawaban3 << endl;

    return 0;
}