#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;



int main(int argc, char const* argv[])
{
    string greeting = "Hello, ";
    int len = greeting.length();
    int pos = greeting.find("he");
    string s2 = greeting.substr(2,3);
    cout << greeting  << endl;
    return 0;
}
