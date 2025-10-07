#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int result{};
        for_each(nums.begin(), nums.end(), [&](const int x)
                 {
            if(x!=val)
            {
                result++;
            } });
        erase(nums, val);
        return result;
    }

    int removeElement_double_ptr(vector<int> &nums, int val)
    {
        int length = nums.size();
        int ptr{};
        for (int i = 0; i < length; i++)
        {
            if (nums[i] != val)
            {
                nums[ptr] = nums[i];
                ptr++;
            }
        }
        return ptr;
    }
};
