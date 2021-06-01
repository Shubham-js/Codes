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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp = head;
        int l = 0;
        while (temp != nullptr)
        {
            temp = temp->next;
            l++;
        }
        cout << l << endl;
        int k = l - n;
        if (k == 0)
        {
            return head->next;


        }
        cout << k << endl;
        ListNode*curr = head;
        ListNode*prev = head;
        while (k--)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = nullptr;
        cout << curr->val << endl;
        return head;
    }
};