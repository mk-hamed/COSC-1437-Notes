#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int N_GRADES = 4;
    int grades[N_GRADES];  // using array with CONST value variable to store grades
    int sum_of_grades = 0;
    double avg = 0;
    for (int i=0;i<N_GRADES;i++) // for loop to accumulate grades
    {
        cin >> grades[i];
        sum_of_grades = sum_of_grades + grades[i];
    }
    avg = (double) sum_of_grades / N_GRADES; // getting average of grades; explicit casting to divide two ints and get a double result
    cout << "Average = " << fixed << setprecision(2) << avg << endl;

    for (int i=0;i<N_GRADES;i++) // for loop to subtract average from each grade and print results
    {
        cout << grades[i] - avg << endl;
    }
    return 0;
}