class Solution
{
private:
    int mem[46]{0};

public:
    int climbStairs(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        if (n == 2)
        {
            return 2;
        }
        int prev2{1}, prev1{2}, current{};
        for (int i = 3; i <= n; i++)
        {
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }
        return prev1;
    }

    int climbStairs_2(int n)
    {
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        if (mem[n] != 0)
            return mem[n];

        mem[n] = climbStairs(n - 1) + climbStairs(n - 2);
        return mem[n];
    }
};
