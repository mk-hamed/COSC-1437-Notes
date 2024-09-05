#include <iostream>

using namespace std;

int main()
{
    int last_value;
    int result = 0; // accumulator value
    cout << "Enter the last value: ";
    cin >> last_value;

    for (int i=0; i < last_value; i++)
    {
        result = result + (i+1);
    }
    cout << "Result = " << result << endl;
    return 0;
}