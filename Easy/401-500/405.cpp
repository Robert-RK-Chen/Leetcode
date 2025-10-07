#include <string>
using namespace std;

class Solution
{
public:
    string toHex(int num)
    {
        if (num == 0)
        {
            return "0";
        }
        string result{};
        for (int i = 7; i >= 0; i--)
        {
            int val = (num >> (4 * i)) & 0xf;
            if (result.length() > 0 || val > 0)
            {
                char digit = val < 10 ? static_cast<char>('0' + val) : static_cast<char>('a' + val - 10);
                result.push_back(digit);
            }
        }
        return result;
    }
};
