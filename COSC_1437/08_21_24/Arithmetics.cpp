#include <iostream>

using namespace std;

int main()
{
    int PSID = 123456;
    int digit = (PSID / 10) % 10;

    /* 
        modulous/ remainder (%) by 10 to get last digit
        divide by 10 to get the second to last number
        divide by 100 to get third to last...etc
    */
    cout << digit << endl;

    return 0;
}