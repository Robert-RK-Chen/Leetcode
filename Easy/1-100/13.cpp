#include <algorithm>
#include <map>
#include <string>
using namespace std;

map<char, int> RomanMap = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}};

class Solution
{
public:
    int romanToInt(string s)
    {
        int result{}, prev{};
        for (int i = s.length() - 1; i >= 0; i--)
        {
            int current = RomanMap[s[i]];
            result += (current >= prev) ? (current) : (-current);
            prev = current;
        }
        return result;
    }
};
