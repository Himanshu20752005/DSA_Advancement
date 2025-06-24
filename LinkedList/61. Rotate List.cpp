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
    ListNode* rotateRight(ListNode* head, int k) {
        struct ListNode *ptr,*ptr2,*temp;
        if(head == NULL || head->next == NULL) return head;
         
        int count = 0;
        ptr2 = head;
        while(ptr2){
            count++;
            ptr2=ptr2->next ;
        } 

        k = k%count;

        for(int i = 0 ; i<k ;i++){
            ptr = head;

            while(ptr->next->next){
                ptr = ptr->next;
            }
            
            temp = ptr->next;
            ptr->next = NULL; 
            temp->next = head;
            head = temp;

       }

       return head;
    }
};
