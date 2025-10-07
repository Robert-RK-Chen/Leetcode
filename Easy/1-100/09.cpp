#include <algorithm>
#include <string>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        std::string str_x = std::to_string(x);
        std::reverse(str_x.begin(), str_x.end());
        return std::to_string(x) == str_x ? true : false;
    }
};
