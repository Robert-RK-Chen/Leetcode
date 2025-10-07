#include <algorithm>
#include <vector>

using std::vector;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        auto answer = vector<vector<int>>{};
        std::ranges::sort(nums);
        int n = nums.size();
        for (int i = 0; i < n - 2; i++)
        {
            if (nums[i] > 0)
            {
                break;
            }
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            int j{i + 1}, k{n - 1};
            while (j < k)
            {
                if (nums[j] + nums[k] == -nums[i])
                {
                    /* code */
                }
            }
        }
    }
};
