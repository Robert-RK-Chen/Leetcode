#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        auto numSet = unordered_set<int>{nums.begin(), nums.end()};
        if (numSet.size() == nums.size())
        {
            return false;
        }
        return true;
    }

    bool containsDuplicate_2(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return true;
            }
        }
        return false;
    }
};
