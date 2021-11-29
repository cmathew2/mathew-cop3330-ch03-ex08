
#include "std_lib_facilities.h"


int main()
{
    int num {0};
    cout << "Enter a number to check if it is even or odd:";
    cin >> num;

    if (num % 2 == 0)
        cout << "The value " << num << "is an even number\n";
    else 
        cout << "The value " << num << "is an odd number\n";

    return 0;
}
