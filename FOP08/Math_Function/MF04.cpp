#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a = 5.89;
    double b = 7.2;
    double c = 12.05;
    double d = 0.03;
    double result1, result2;

    // Untuk nilai a
    result1 = ceil(5.89);
    result2 = floor (5.89);
    cout << "Round up (5.89) = " << result1 << endl;
    cout << "Round down (5.89) = " << result2 << endl;

    // Untuk nilai b
    result1 = ceil(7.2);
    result2 = floor (7.2);
    cout << "Round up (7.2) = " << result1 << endl;
    cout << "Round down (7.2) = " << result2 << endl;

    // Untuk nilai c
    result1 = ceil(12.05);
    result2 = floor (12.05);
    cout << "Round up (12.05) = " << result1 << endl;
    cout << "Round down (12.05) = " << result2 << endl;

    // Untuk nilai d
    result1 = ceil(0.03);
    result2 = floor (0.03);
    cout << "Round up (0.03) = " << result1 << endl;
    cout << "Round down (0.03) = " << result2 << endl;
    
    return 0;
}