#include <iostream>

using namespace std;

int main()
{
    int input;
    cout << "Enter the input number: ";
    cin >> input;
    if (input > 0)
    {
        while (input % 2 == 0)
        {
            cout << input << endl;
            input = input / 2;
        }
    }
    else 
        cout << "Invalid input" << endl;
    cout << input << endl;
    return 0;
}