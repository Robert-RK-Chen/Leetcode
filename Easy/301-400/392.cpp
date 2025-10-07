#include <string>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        if (s.length() > t.length())
        {
            return false;
        }
        int i{0}, j{0}, size_s = s.length(), size_t = t.length();
        while (i < size_s && j < size_t)
        {
            if (s[i] == t[j])
            {
                i++;
            }
            j++;
        }
        return i == size_s;
    }
};
