class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int left{1}, right{num};
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            long result = static_cast<long>(mid) * mid;
            if (result < num)
            {
                left = mid + 1;
            }
            else if (result > num)
            {
                right = mid - 1;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
