class Solution
{
public:
    int mySqrt(int x)
    {
        int left{}, right{x};
        while (left <= right)
        {
            int mid{left + (right - left) / 2};
            double p = 1.0 * mid * mid;
            if (p == x)
            {
                return mid;
            }
            if (p < x)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return right;
    }
};
