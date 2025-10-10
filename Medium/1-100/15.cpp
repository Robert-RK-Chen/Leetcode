#include <algorithm>
#include <vector>

using std::vector;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result;
        if (nums.size() < 3)
        {
            return result;
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++)
        {
            // 避免第一个数重复
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            // 转换为两数之和问题
            int target = -nums[i], left = i + 1, right = nums.size() - 1;
            while (left < right)
            {
                int sum = nums[left] + nums[right];
                if (sum == target)
                {
                    result.push_back({nums[i], nums[left], nums[right]});
                    // 跳过重复元素
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;
                    left++;
                    right--;
                }
                else if (sum < target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        return result;
    }
};
