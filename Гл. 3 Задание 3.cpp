// захотелось сделать оба случая

#include <iostream>
using namespace std;

int main()
{
    int ch;
    double way, fuel;
    cout << "Do you use miles or kilometres?\n"<< "1 - miles;\n" << "2 - kilometres;\n";
    cin >> ch;
    switch (ch) {
        case 1:
            cout << "Enter the miles ___";
            cin >> way;
            cout << "\nEnter the gallons ___";
            cin >> fuel;
            cout << "\nYour car goes "<< way/fuel <<" miles per 1 gallon of fuel";
            break;
        case 2:
            cout << "Enter the kilometres ___";
            cin >> way;
            cout << "\nEnter the liters ___";
            cin >> fuel;
            cout << "\nYour car goes "<< way/fuel <<" kilometres per 1 liter of fuel";
        default:
            break;
    }
}
