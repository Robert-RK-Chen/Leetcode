#include <string>
using namespace std;

class Solution
{
public:
    int countSegments(string s)
    {
        int result{};
        for (int i = 0; i < s.size(); i++)
        {
            if ((i == 0 || s[i - 1] == ' ') && s[i] != ' ')
            {
                result++;
            }
        }
        return result;
    }
};
