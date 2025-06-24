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
    ListNode* swapPairs(ListNode* head) {
        struct ListNode *ptr;
        ptr = head;
        int count = 0;
        while(ptr && ptr->next){
            if(count%2 == 0){
                int temp = ptr->next->val;
                ptr->next->val = ptr->val;
                ptr->val = temp;
                
            }
            ptr = ptr->next;
            count++;
        }
        return head;
    }
};
