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

    switch(operation)
    {
        case 'a':   int result_a = number1 + number2;
                    cout << "Result = " << result_a << endl;
                    break;
        case 's':   int result_s = number1 - number2;
                    cout << "Result = " << result_s << endl;
                    break;
        case 'm':   int result_m = number1 * number2;
                    cout << "Result = " << result_m << endl;
                    break;
        case 'd':
            if (number2 != 0)
            {
                double result_d = (double) number1 / number2;
                cout << "Result = " << fixed << setprecision(2) << result_d << endl;
            }
            else 
                cout << "Division by 0" << endl;
            break;
    }

    /*else if (operation == 's')
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

    */
    return 0;
}