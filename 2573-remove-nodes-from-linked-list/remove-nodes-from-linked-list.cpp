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
ListNode* reverseList( ListNode*head){
   ListNode* curr=NULL;
   while(head){
     ListNode* nextNode=head->next;
      head->next=curr;
       curr=head;
       head=nextNode;
   }
   return curr;
}

class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
    
   //ListNode* removeNodes(ListNode* head){
        head=reverseList(head);
        int maxval=head->val;
        ListNode* curr=head;
        while(curr->next){
            if(curr->next->val < maxval){
                curr->next= curr->next->next;
            }
            else{
                curr=curr->next;
                maxval=curr->val;
            }
        }
           head=reverseList(head);
        return head;
    }
};