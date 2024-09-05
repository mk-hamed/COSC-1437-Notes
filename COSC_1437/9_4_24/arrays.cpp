#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int grades[] = {10,20,30,40};

    for (int i=0; i<4;i++)
        cout << grades[i] << " ";
    
    for (int grade : grades) // alternative to first for loop; this is a range based for loop (like saying "for grade in grades")
        cout << grade << " ";
    return 0;
}