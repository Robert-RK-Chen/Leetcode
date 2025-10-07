#include <cmath>
#include <vector>
using std::vector;

class Solution
{
public:
    vector<int> constructRectangle(int area)
    {
        int w = sqrt(1.0 * area);
        while (area % w)
        {
            --w;
        }
        return {area / w, w};
    }
};
