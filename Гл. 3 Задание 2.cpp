#include <iostream>
using namespace std;

const int feet = 12;
const int inch = 0.0254;
const int kg = 2.2;

int main()
{
    cout << "Enter your height in feet and inches ___";
    double heif (0), heii(0), wei (0);
    cin >> heif >> heii; // heii - дюймы, heif - футы
    cout << "\nEnter your weight ___";
    cin >> wei;
    heii = (heif*feet + heii)*inch;
    wei = wei/kg;
    cout << "The BMI is "<< wei/(heii*heii) << " . \n";
    return 0;
}
