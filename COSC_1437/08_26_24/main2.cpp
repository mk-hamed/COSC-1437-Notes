#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double MY_VALUE = 0.333333;
    double user_input;
    cin >> user_input;

    // never compare doubles using ==
    // use cmath library and abs value operator
    // fabs(condition) < 0.0001 adds a precision check/ margin of error
    if (fabs(user_input == MY_VALUE) < 0.0001)
        cout << "Equal" << endl;
    else 
        cout << "Not Equal" << endl;
    return 0;
}