#include <cmath>
#include <vector>

using std::min;
using std::vector;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int result{0};
        for (int left = 0, right = height.size() - 1; left < right;)
        {
            int curVolumn = (right - left) * min(height[left], height[right]);
            result = curVolumn > result ? curVolumn : result;
            if (height[left] <= height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return result;
    }
};
