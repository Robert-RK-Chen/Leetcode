#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> results(n);
        for (int i = 1; i <= n; i++)
        {
            if (i % 15 == 0)
            {
                results[i - 1] = "FizzBuzz";
                continue;
            }
            if (i % 3 == 0)
            {
                results[i - 1] = "Fizz";
                continue;
            }
            if (i % 5 == 0)
            {
                results[i - 1] = "Buzz";
                continue;
            }
            results[i - 1] = to_string(i);
        }
        return results;
    }
};

int main()
{
    Solution s;
    s.fizzBuzz(16);
    return 0;
}
