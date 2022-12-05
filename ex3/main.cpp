#include <iostream>

using namespace std;

int main()
{
    int number_of_gallons;
    cout << "Enter a number of gallons: ";
    cin >>  number_of_gallons;

    cout << "----------------------------------------" << endl;
    cout << "In cubic feet " << number_of_gallons / 7.481 << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
