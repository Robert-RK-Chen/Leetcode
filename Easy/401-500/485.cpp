#include <vector>
using std::vector;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int result{0}, current{0};
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                current++;
            }
            else
            {
                result = current > result ? current : result;
                current = 0;
            }
        }
        result = current > result ? current : result;
        return result;
    }
};
