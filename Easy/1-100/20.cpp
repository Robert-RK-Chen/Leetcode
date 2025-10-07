#include <string>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        int length = s.length() / 2;
        for (int i = 0; i < length; i++)
        {
            size_t pos{};
            while ((pos = s.find("()")) != std::string::npos)
            {
                s.erase(pos, 2);
            }
            while ((pos = s.find("{}")) != std::string::npos)
            {
                s.erase(pos, 2);
            }
            while ((pos = s.find("[]")) != std::string::npos)
            {
                s.erase(pos, 2);
            }
        }
        return s.length() == 0;
    }
};
