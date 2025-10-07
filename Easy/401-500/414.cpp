#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        long a = LONG_MIN, b = LONG_MIN, c = LONG_MIN;
        for (const long num : nums)
        {
            if (num > a)
            {
                c = b;
                b = a;
                a = num;
            }
            else if (num < a && num > b)
            {
                c = b;
                b = num;
            }
            else if (num < b && num > c)
            {
                c = num;
            }
        }
        return c == LONG_MIN ? a : c;
    }
};
