#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int length = nums.size();
        int ptr{};
        for (int i = 1; i < length; i++)
        {
            if (nums[i] != nums[ptr])
            {
                ptr++;
                nums[ptr] = nums[i];
            }
        }
        return ptr + 1;
    }
};
