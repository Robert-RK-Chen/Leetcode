#include <string>
#include <vector>

using std::string;
using std::vector;

class Solution
{
private:
    vector<string> THOUSANDS = {"", "M", "MM", "MMM"};
    vector<string> HUNDREDS = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    vector<string> TENS = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    vector<string> ONES = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

public:
    string intToRoman(int num)
    {
        return THOUSANDS[num / 1000] + HUNDREDS[num % 1000 / 100] + TENS[num % 100 / 10] + ONES[num % 10];
    }
};
