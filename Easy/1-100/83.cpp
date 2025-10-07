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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == nullptr)
        {
            return head;
        }

        ListNode *p = head, *q = p->next;
        while (q != nullptr)
        {
            if (q->val == p->val)
            {
                q = q->next;
            }
            else
            {
                p->next = q;
                p = q;
                q = q->next;
            }
        }
        p->next = nullptr;
        return head;
    }
};
