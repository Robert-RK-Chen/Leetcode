#include <cmath>
#include <vector>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum{0}, i{}, size = nums.size();
        for (; i < size; i++)
        {
            sum += nums[i] - i;
        }
        sum -= i;
        return abs(sum);
    }
};
