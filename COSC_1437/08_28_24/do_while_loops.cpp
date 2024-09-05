#include <iostream>

using namespace std;

int main()
{
    int input;
    cout << "Enter input: ";
    cin >> input;

    do 
    {
        int digit = input % 10;  // getting least significant digit
        cout << digit << endl;
        input = input / 10;
    } while (input > 0);

    return 0;
}