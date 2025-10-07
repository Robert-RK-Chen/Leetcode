#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        auto numSet = unordered_map<int, int>{};
        for (int i = 0; i < nums.size(); i++)
        {
            int result = nums[i];
            if (numSet.contains(result))
            {
                if (i - numSet[result] <= k)
                {
                    return true;
                }
            }
            numSet[result] = i;
        }
        return false;
    }
};

int main()
{
    auto nums = vector<int>{1, 2, 3, 1, 2, 3};
    Solution s;
    return s.containsNearbyDuplicate(nums, 2);
}
