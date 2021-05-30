all:
	clang++ -std=c++11 -Wall -Wextra -Wpedantic -Werror account.cpp transaction.cpp simpleclasses.cpp -o simple
