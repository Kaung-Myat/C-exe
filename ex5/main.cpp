#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int pounds,shillings,pence;
    float decimal_pound;

    cout << "Enter pounds: ";
    cin >> pounds;

    cout << "\nEnter shillings: ";
    cin >> shillings;

    cout << "\nEnter pence: ";
    cin >> pence;

    int total_pence = pounds * 240 + shillings*12 + pence;
    decimal_pound = (static_cast<float>(total_pence)) / 240;

    cout << "\nDecimal pound is " << setprecision(2) << '\x9c' << decimal_pound << endl;

    return 0;
}
