#include <format>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        vector<string> result;
        if (nums.empty())
        {
            return result;
        }
        int start = 0;
        for (int i = 1; i <= nums.size(); i++)
        {
            if (i == nums.size() || nums[i - 1] + 1 != nums[i])
            {
                if (start == i - 1)
                {
                    result.push_back(format("{}", nums[start]));
                }
                else
                {
                    result.push_back(format("{}->{}", nums[start], nums[i - 1]));
                }
                start = i;
            }
        }
        return result;
    }
};
