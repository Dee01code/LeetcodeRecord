/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* deleteMiddle(ListNode *head)
        {
            if (!head->next) return NULL;
            ListNode *slow = head;
            ListNode *fast = head->next;
            ListNode *pre = NULL;
            while (fast != NULL)
            {
                pre = slow;
                slow = slow->next;
                if (fast->next) fast = fast->next->next;
                else fast = fast->next;
            }
​
            pre->next = slow->next;
            return head;
        }
};
