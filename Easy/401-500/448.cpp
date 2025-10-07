#include <cmath>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        auto result = vector<int>{};
        for (int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0)
            {
                nums[index] = -nums[index];
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                result.push_back(i + 1);
            }
        }
        return result;
    }
};

int main()
{
    auto nums = vector<int>{4, 3, 2, 7, 8, 2, 3, 1};
    Solution s;
    auto result = s.findDisappearedNumbers(nums);
    return 0;
}
