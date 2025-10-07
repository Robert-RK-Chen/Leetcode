#include <algorithm>
#include <string>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i = 0, j = s.length() - 1;
        while (i < j)
        {
            while (i < s.length() && !(isalpha(s[i]) || isdigit(s[i])))
            {
                i++;
            }
            while (j >= 0 && !(isalpha(s[j]) || isdigit(s[j])))
            {
                j--;
            }
            if (i <= j && tolower(s[i]) != tolower(s[j]))
            {
                return false;
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    return s.isPalindrome("0P");
}
