#include <regex>
#include <string>
using std::regex;
using std::regex_replace;
using std::string;

class Solution
{
public:
    string licenseKeyFormatting(string s, int k)
    {
        regex reg("-");
        s = regex_replace(s, reg, "");
        transform(s.begin(), s.end(), s.begin(), ::toupper);

        for (int i = s.length() - k; i > 0; i -= k)
        {
            s.insert(i, "-");
        }

        return s;
    }

    string licenseKeyFormatting_2(string s, int k)
    {
        string clean = "";
        for (char c : s)
        {
            if (c != '-')
            {
                clean += toupper(c);
            }
        }
        for (int i = clean.length() - k; i > 0; i -= k)
        {
            clean.insert(i, "-");
        }
        return clean;
    }
};
