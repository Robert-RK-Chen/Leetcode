#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int left = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            if (nums[right] != 0)
            {
                nums[left] = nums[right];
                left++;
            }
        }
        while (left < nums.size())
        {
            nums[left++] = 0;
        }
    }
};

int main()
{
    auto nums = vector<int>{1, 0, 1, 0, 3, 12, 0};
    Solution s;
    s.moveZeroes(nums);
    return 0;
}
