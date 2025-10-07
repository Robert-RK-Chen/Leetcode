#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        auto index = haystack.find(needle);
        return index == std::string::npos ? -1 : index;
    }
};

int main()
{
    Solution s;
    int result = s.strStr("leetcode", "leet");
    cout << result << endl;
    return 0;
}
