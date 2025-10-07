#include <string>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        auto letterSet = unordered_set<char>{};
        int start{0}, end{0}, result{0};
        while (end < s.size())
        {
            if (letterSet.contains(s[end]))
            {
                result = max(end - start, result);
                while (s[start] != s[end])
                {
                    letterSet.erase(s[start]);
                    start++;
                }
                start++;
                end++;
            }
            else
            {
                letterSet.insert(s[end]);
                end++;
            }
        }
        return max(end - start, result);
    }

    int lengthOfLongestSubstring_2(string s)
    {
        auto letterSet = unordered_set<char>{};
        int start{0}, result{0};
        for (int end = 0; end < s.length(); end++)
        {
            while (letterSet.count(s[end]))
            {
                letterSet.erase(s[start++]);
            }
            letterSet.insert(s[end]);
            result = max(result, end - start + 1);
        }
        return result;
    }
};
