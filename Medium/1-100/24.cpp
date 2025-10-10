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
    ListNode *swapPairs(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *p = head, *q = head->next, *r = q;
        while (p != nullptr && q != nullptr)
        {
            p->next = q->next;
            q->next = p;
            p = p->next;
            if (p != nullptr)
            {
                q = p->next;
                if (q != nullptr)
                {
                    head->next = q;
                    head = p;
                }
            }
        }
        return r;
    }
};
