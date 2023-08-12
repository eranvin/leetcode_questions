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
        int list_size = 1;
        ListNode* left;
        for(left = head; left->next; left = left->next )
            list_size++;
        
        if(list_size == n)
            return head->next;

        left = head;
        for(int i = 0; i < list_size -n -1; i++){
            left= left->next;
        }

        left->next= left->next->next;
        return head;

        
    }
};
