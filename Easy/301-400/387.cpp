#include <array>
#include <string>
using namespace std;

class Solution
{
public:
    int firstUniqChar(string s)
    {
        auto dict = array<int, 26>{};
        for (const auto ch : s)
        {
            dict[ch - 'a']++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (dict[s[i] - 'a'] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
