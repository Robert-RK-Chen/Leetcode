class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int d = 0;
        int z = x ^ y;
        while (z != 0)
        {
            z = z & (z - 1);
            d++;
        }
        return d;
    }
};
