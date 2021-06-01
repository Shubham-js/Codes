/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* merger(ListNode*a, ListNode*b)
    {
        if (a == nullptr and b == nullptr)
        {
            return nullptr;
        }
        ListNode* x = new ListNode();
        ListNode* y = x;
        while (a != nullptr and b != nullptr)
        {
            if (a->val <= b->val)
            {
                x->next = a;
                a = a->next;

            }
            else if (a->val > b->val)
            {
                x->next = b;
                b = b->next;
            }
            x = x->next;

        }
        while (a != nullptr)
        {
            x->next = a;
            a = a->next;
            x = x->next;
        }
        while (b != nullptr)
        {
            x->next = b;
            b = b->next;
            x = x->next;
        }
        return y->next;

    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int s = (int)lists.size();
        if (s == 0)
        {
            return nullptr;
        }
        ListNode* l1 = lists[0];


        for (int i = 1; i < s; i++)
        {
            if (lists[i] != nullptr)
                l1 = merger(l1, lists[i]);
        }
        return l1;

    }
};
or

class Solution {
public:
    ListNode* merge2Lists(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;
        ListNode* head = l1->val <= l2->val ? l1 : l2;
        head->next = l1->val <= l2->val ? merge2Lists(l1->next, l2) : merge2Lists(l1, l2->next);
        return head;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return NULL;

        ListNode* head = lists[0];

        for (int i = 1; i < lists.size(); i++)
            head = merge2Lists(head, lists[i]);

        return head;
    }
};