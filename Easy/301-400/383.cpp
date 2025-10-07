#include <array>
#include <string>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        if (ransomNote.size() > magazine.size())
        {
            return false;
        }
        auto dict_a = array<int, 26>{};
        auto dict_b = array<int, 26>{};
        for (const char ch : ransomNote)
        {
            dict_a[ch - 'a']++;
        }
        for (const char ch : magazine)
        {
            dict_b[ch - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (dict_a[i] > dict_b[i])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    s.canConstruct("aa", "aab");
}
