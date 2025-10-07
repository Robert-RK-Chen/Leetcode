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
    ListNode *reverseList(ListNode *head)
    {
        if (head == nullptr)
        {
            return head;
        }
        ListNode *p = head, *q = p->next;
        while (q)
        {
            p->next = q->next;
            q->next = head;
            head = q;
            q = p->next;
        }
        return head;
    }

    ListNode *reverseList_2(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *temp = reverseList_2(head->next);
        head->next->next = head;
        head->next = nullptr;
        return temp;
    }
};
