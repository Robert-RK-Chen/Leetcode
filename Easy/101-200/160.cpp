#include <cstddef>
#include <stack>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        stack<ListNode *> stackA{}, stackB{};
        ListNode *p = headA, *q = headB;

        while (p != nullptr)
        {
            stackA.emplace(p);
            p = p->next;
        }
        while (q != nullptr)
        {
            stackB.emplace(q);
            q = q->next;
        }

        while (!stackA.empty() && !stackB.empty())
        {
            p = stackA.top();
            stackA.pop();
            q = stackB.top();
            stackB.pop();
            if (p != q)
            {
                return p->next;
            }
        }

        if (stackA.empty() && stackB.empty())
        {
            return p;
        }
        else if (stackA.empty())
        {
            return stackB.top()->next;
        }
        else
        {
            return stackA.top()->next;
        }
    }
};
