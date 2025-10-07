#include <cstddef>
#include <exception>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        for (int i = 0; i <= 10001; i++)
        {
            if (head == nullptr)
            {
                return false;
            }
            head = head->next;
        }
        return true;
    }
};
