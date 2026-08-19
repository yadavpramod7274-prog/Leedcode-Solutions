
class Solution {
public:
ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
           ListNode* newHead= reverseList(head->next);
           head->next->next=head;
            head->next =NULL;
            return newHead;
};

  
    bool isPalindrome(ListNode* head) {
         
           // deep copy
           ListNode* slow=head;
            ListNode* fast=head;
             while(fast->next!=NULL && fast->next->next!=NULL){
                slow=slow->next;
                 fast=fast->next->next;
             }
             // slow is at the left middle
              ListNode* newHead=reverseList(slow->next);
                ListNode* a=head;
              ////   ListNode* b=head;
           ListNode* b=newHead;
          
          while(b){
            if(a->val!=b->val) return false;
             a=a->next;
              b=b->next;
          }
          return true;
    }
    
};