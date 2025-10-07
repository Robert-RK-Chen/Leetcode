#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int>::iterator end{};
        int first_index{};
        for (first_index = 0; first_index < nums.size(); first_index++)
        {
            end = find(nums.begin() + first_index + 1, nums.end(), target - nums[first_index]);
            if (end != nums.end())
            {
                break;
            }
        }
        return vector<int>{first_index, static_cast<int>(end - nums.begin())};
    }
};
