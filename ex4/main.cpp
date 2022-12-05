#include <iostream>

using namespace std;

int main()
{
    float input_dollar;
    cout << "Enter amount of dollar: ";
    cin >> input_dollar;
    cout << "---------------------------------------------" << endl;

    cout << "In pound " << '&#163' << input_dollar / 1.487 << endl;
    cout << "In franc " << input_dollar / 0.172 << endl;
    cout << "In deutschemark " << input_dollar / 0.584  << endl;
    cout << "In yen " << input_dollar / 0.00955 << endl;

    cout << "---------------------------------------------" << endl;

    return 0;
}
