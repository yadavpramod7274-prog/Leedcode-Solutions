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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode* f=head;
       ListNode* s=head;
       ListNode* curr=head;
       for(int i=1;i<k;i++){// k-1 node taki k th node ban sake;
         curr=curr->next;
       }
         f=curr;

         while(curr->next){ // current ko end me kth node bana do
            curr=curr->next;
             s=s->next;
         }
         // value ko aapas me change kar do;
          int  temp=f->val;
          f->val=s->val;
         s-> val=temp;
          return head;
    }
};