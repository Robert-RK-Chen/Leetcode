#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int longestPalindrome(string s)
    {
        auto letters = unordered_map<char, int>{};
        auto result{0}, contains_singal{0};
        for (const char ch : s)
        {
            letters[ch]++;
        }
        for (const auto letter : letters)
        {
            if (letter.second % 2 == 0)
            {
                result += letter.second;
            }
            else
            {
                result += letter.second - 1;
                contains_singal = 1;
            }
        }
        if (contains_singal == 1)
        {
            result++;
        }
        return result;
    }

    int longestPalindrome_2(string s)
    {
        bool seen[52] = {false};
        int pairs = 0;
        for (char ch : s)
        {
            if (seen[ch])
            {
                pairs += 2;
                seen[ch] = false;
            }
            else
            {
                seen[ch] = true;
            }
        }
        return pairs + (pairs < s.length() ? 1 : 0);
    }
};

int main()
{
    Solution s;
    s.longestPalindrome("aabbbbcc");
    return 0;
}
