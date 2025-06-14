class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int count = 0;
       struct ListNode *temp, *temp2;
       temp = head;

       // Advance temp n steps ahead
       while(count != n){
           temp = temp->next;
           count++;
       }

       // If temp is NULL, we have to delete the head node
       if(temp == nullptr){
           temp2 = head;
           head = head->next;
           delete temp2;
           return head;
       }

       // Move temp and temp2 until temp->next is null
       temp2 = head;
       while(temp->next != nullptr){
           temp = temp->next;
           temp2 = temp2->next;
       }

       // Delete the nth node from the end
       ListNode* nodeToDelete = temp2->next;
       temp2->next = temp2->next->next;
       delete nodeToDelete;

       return head;
    }
};
