#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int result{0}, count{0}, temp{nums[0]}, temp_count{0};
        for (const auto &num : nums)
        {
            if (num == temp)
            {
                temp_count++;
            }
            else
            {
                if (temp_count > count)
                {
                    result = temp;
                    count = temp_count;
                }
                temp = num;
                temp_count = 1;
            }
        }
        if (temp_count > count)
        {
            return temp;
        }
        return result;
    }

    int majorityElement_2(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};
