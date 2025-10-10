#include <string>
#include <vector>

using std::string;
using std::vector;

class Solution
{
private:
    const string letterMap[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> result;
    string s;
    void backtracing(const string &digits, int index)
    {
        if (index == digits.size())
        {
            result.push_back(s);
            return;
        }
        int digit = digits[index] - '0';
        string letters = letterMap[digit];
        for (int i = 0; i < letters.size(); i++)
        {
            s.push_back(letters[i]);
            backtracing(digits, index + 1);
            s.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
        {
            return result;
        }
        backtracing(digits, 0);
        return result;
    }
};
