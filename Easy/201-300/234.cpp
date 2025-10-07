#include <stack>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        auto s = stack<ListNode *>{};
        ListNode *p = head, *q = head;
        while (p != nullptr)
        {
            s.push(p);
            p = p->next;
        }
        while (!s.empty() && q->next != p)
        {
            p = s.top();
            if (p == q)
            {
                return true;
            }
            if (p->val == q->val)
            {
                s.pop();
                q = q->next;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
