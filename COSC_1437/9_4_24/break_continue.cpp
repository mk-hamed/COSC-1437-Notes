#include <iostream>

using namespace std;

int main()
{
    /*
    for (int i =0; i<100; i = i + 2)
    {
        if (i%2 != 0)
            continue;
        cout << i << " ";

    }
    */

    
    int i = 0;
    while (i < 100)
    {
        if (i%2 != 0)
        {
            i++;
            continue;

        }
        cout << i << " ";
    } 
    
    /* using a for loop is better than while loop; for loop includes incrementation of i */
    return 0;
}