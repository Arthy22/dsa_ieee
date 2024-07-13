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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1) return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode * curr=head;
        ListNode * start = dummy;
        while (true) {
            ListNode* check = start;
            for (int i = 0; i < k; i++) {
                check = check->next;
                if (!check) return dummy->next; 
            }
            vector<ListNode*> temp(k);
            for (int i = 0; i < k; ++i) {
                temp[i] = curr;
                curr = curr->next;
            }
            for (int j = k - 1; j >= 0; --j) {
                start->next = temp[j];
                start = start->next;
            }
            start->next = curr; 
        }
        return dummy->next;
    }
};
