class Solution
{
public:
    int arrangeCoins(int n)
    {
        int line = 1;
        while (n >= 0)
        {
            n -= line;
            if (n < 0)
            {
                break;
            }
            else
            {
                line++;
            }
        }
        return line - 1;
    }
};
