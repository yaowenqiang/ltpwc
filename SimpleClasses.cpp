#include <iostream>
using std::cout;

#include "Account.h"


int main()
{
    Account a1;
    a1.Deposit(90);

    std::cout << "After depositing $90 "  <<
        "balance is " << a1.GetBalance() <<  std::endl;

    for (auto s:a1.Report()) {
        std::cout << s << std::endl;
    }

    a1.Withdraw(50);
    if (a1.Withdraw(100)) {
        std::cout << "second withdraw succeeds" << std::endl;
    }

    std::cout << "After withdrawing $50 then $100" << std::endl;

    for(auto s :a1.Report()) {
        std::cout << s << std::endl;
    }

    return 0;
}
