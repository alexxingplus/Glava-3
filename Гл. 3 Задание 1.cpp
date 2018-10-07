#include <iostream>
using namespace std;

const int feet = 12;

int main()
{
    cout << "What is your height in inches? ___";
    int inch (0);
    cin >> inch;
    cout << "\nSo your height actually is "<< inch/feet << " feet and "<< inch%feet << " inches.\n";
    return 0;
}
