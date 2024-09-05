#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declaring the variables
    int number1, number2;
    char operation;
    //read input
    cout << "Enter the first value: ";
    cin >> number1;
    cout << "Enter the second value: ";
    cin >> number2;
    cout << "Select the operation (a, s, m, or d): ";
    cin >> operation;

    //Conditional to read inputs
    if (operation == 'a')
    {
        int result = number1 + number2;
        cout << "Result = " << result << endl;
    }
    else if (operation == 's')
    {
        int result = number1 - number2;
        cout << "Result = " << result << endl;
    }
    else if (operation == 'm')
    {
        int result = number1 * number2;
        cout << "Result = " << result << endl;
    }
    else if (operation == 'd')
    {
        if (number2 != 0)
        {
            double result = (double) number1 / number2;
            cout << "Result = " << fixed << setprecision(2) << result << endl;
        }
        else 
            cout << "Division by 0" << endl;
        
    }
    else
        cout << "Invalid option" << endl;
    return 0;
}