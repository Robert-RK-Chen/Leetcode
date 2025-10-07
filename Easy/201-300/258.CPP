class Solution
{
public:
    int addDigits(int num)
    {
        if (num > 9)
        {
            num %= 9;
            if (num == 0)
            {
                return 9;
            }
        }
        return num;
    }
};
