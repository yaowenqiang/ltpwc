#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cin;
using std::string;
using std::cout;
using std::vector;
using std::endl;
using std::begin;
using std::end;
using std::sort;
using std::count;

int main(int argc, char const* argv[])
{
    vector<int> nums;

    nums.push_back(3);

    vector<string> words;
    sort(begin(words), end(words));
    int thress= count(begin(nums), end(nums), 3);
    for (auto item:nums) {
        std::cout << item << std::endl;
    }

    for (unsigned int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << std::endl;
    }

    for (auto i = begin(nums); i != end(nums);i++) {
        std::cout << *i << std::endl;
    }
    return 0;
}
