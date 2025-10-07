#include <algorithm>
#include <string>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int result{0};
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                result++;
            }
            if (result != 0 && s[i] == ' ')
            {
                break;
            }
        }
        return result;
    }
};
