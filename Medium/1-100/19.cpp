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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *p{head}, *q{head};
        for (int i = 0; i < n; i++)
        {
            q = q->next;
        }
        if (q == nullptr)
        {
            head = head->next;
            return head;
        }
        while (q->next != nullptr)
        {
            p = p->next;
            q = q->next;
        }
        p->next = p->next->next;
        return head;
    }
};
