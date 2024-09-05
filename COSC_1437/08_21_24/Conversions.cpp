#include <iostream>

using namespace std;

int main()
{
    /*
        implicit casting --> changing value type implicitly
        can be done explicityly using (value type) before value
        also done explicityly with static_cast<value type>
    */
    int num = 1;
    double value = 1.0*num/3;

    cout << value << endl;

    return 0;
}