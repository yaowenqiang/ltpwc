#include <iostream>
//using namespace std;
using std::cout;
using std::cin;

int main()
{
    //std::cout << "hello" << '\n';
    cout << 34 << '\n';
    cout << "hello" << '\n';

    int i = 2 + 2;
    int j = 2;
    cout << i << '\n';
    i = i * 3;

    cout << i << '\n';

    i = 4.9;
    j = 9 / 5;
    cout << i << " " << j << '\n';

    float f = 3.9;
    cout << f << '\n';

    f = 9 / 5;
    f = 9.0 / 5;
    cout << f;

    cout << "Enger a number: ";
    cin >> i;
    cout << '\n' << i << '\n';

}
