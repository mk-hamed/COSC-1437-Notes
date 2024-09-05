#include <iostream>

using namespace std;

int main()
{
    /* unsigned long long int PSID = 12345678000000; 
    cout << PSID << endl;  */                      

    /* computer doesn't know what to do with 0; must clarify unsigned int
        long long used to extend amount of bytes */

    char age = 56;  
    cout << (int) age << endl; 

    /*
        using char to reduce amount of memory
        (int) is used to get the number 56 instead of ASCII value 56
    */

   double percentage = 10/3;
   cout << percentage << endl;

    return 0;
}