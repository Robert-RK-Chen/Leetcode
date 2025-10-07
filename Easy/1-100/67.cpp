#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string result{};
        char ci = '0', di = '0';
        int length_a = a.length(), length_b = b.length();
        if (length_a < length_b)
        {
            a.insert(0, length_b - length_a, '0');
        }
        if (length_b < length_a)
        {
            b.insert(0, length_a - length_b, '0');
        }
        for (int i = a.length() - 1; i >= 0; i--)
        {
            di = (a[i] + b[i] + ci - 3 * '0') % 2 == 0 ? '0' : '1';
            ci = a[i] + b[i] + ci - 3 * '0' >= 2 ? '1' : '0';
            result.insert(result.begin(), di);
        }
        if (ci == '1')
        {
            result.insert(result.begin(), '1');
        }
        return result;
    }
};

int main()
{
    Solution s;
    cout << s.addBinary("1", "111");
    return 0;
}
