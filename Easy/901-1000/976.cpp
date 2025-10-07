#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int largestPerimeter(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), greater<int>());
        for (int i = 1; i < nums.size() - 1; i++)
        {
            if (nums[i + 1] + nums[i] > nums[i - 1])
            {
                return nums[i - 1] + nums[i] + nums[i + 1];
            }
        }
        return 0;
    }
};
