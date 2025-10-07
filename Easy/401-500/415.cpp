#include <algorithm>
#include <string>
using namespace std;

class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int i = num1.length() - 1, j = num2.length() - 1, add = 0;
        string result{};
        while (i >= 0 || j >= 0 || add != 0)
        {
            int x = i >= 0 ? num1[i] - '0' : 0;
            int y = j >= 0 ? num2[j] - '0' : 0;
            int sum = x + y + add;
            result.push_back('0' + sum % 10);
            add = sum / 10;
            i -= 1;
            j -= 1;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
