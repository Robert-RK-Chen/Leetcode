#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        ranges::sort(strs);
        string front_str = strs.front();
        string end_str = strs.back();
        int i{0};
        for (; i < min(front_str.length(), end_str.length()); i++)
        {
            if (front_str[i] != end_str[i])
            {
                break;
            }
        }
        return front_str.substr(0, i);
    }
};
