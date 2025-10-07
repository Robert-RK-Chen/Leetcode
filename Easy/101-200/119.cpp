#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        auto row = vector<int>(rowIndex + 1);
        row[0] = 1;
        for (int i = 1; i <= rowIndex; ++i)
        {
            row[i] = 1LL * row[i - 1] * (rowIndex - i + 1) / i;
        }
        return row;
    }
};

// C^{m}_{n} = C^{m-1}_{n} \times \frac{n-m+1}{m}
