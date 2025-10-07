#include <string>

using std::string;

class Solution
{
public:
    int myAtoi(string s)
    {
        long long res = 0;
        int i = 0, sign = 1, n = s.size();

        // Step 1: Skip leading whitespace
        while (i < n && s[i] == ' ')
        {
            ++i;
        }

        // Step 2: Check for sign
        if (i < n && (s[i] == '+' || s[i] == '-'))
        {
            sign = (s[i++] == '-') ? -1 : 1;
        }

        // Step 3: Convert digits to integer
        while (i < n && isdigit(s[i]))
        {
            res = res * 10 + (s[i++] - '0');

            // Step 4: Clamp value to 32-bit signed integer range
            if (res > INT_MAX)
            {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
        }

        return static_cast<int>(res * sign);
    }
};
