#include <vector>
using namespace std;

class NumArray
{
public:
    vector<int> sum;

    NumArray(vector<int> &nums)
    {
        int size = nums.size();
        sum.reserve(size + 1);
        for (int i = 0; i < size; i++)
        {
            sum[i + 1] = sum[i] + nums[i];
        }
    }

    int sumRange(int left, int right)
    {
        return sum[right + 1] - sum[left];
    }
};
