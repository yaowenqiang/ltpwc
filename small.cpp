#include <iostream>
#include "func.h"
using std::cout;

int main()
{
    int total = add(3,4);
    cout << "3 + 4 is " << total << '\n';

    double another = add(3.1,4.1);
    cout << "3.1 + 4.1 is " << another << '\n';

    double addthree = add(3.1,4.1, 5.1);
    cout << "3.1 + 4.1 + 5.1 is " << addthree << '\n';
    return 0;
}

