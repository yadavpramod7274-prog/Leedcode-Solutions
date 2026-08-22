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
       
       ListNode* curr=head;
       for(int i=0;i<k;i++){// at least k node
        if(!curr) return head;
         curr=curr->next;
       }
        
         ListNode* prev=NULL;
       ListNode* nextNode=NULL;
         curr=head;
       for(int i=0;i<k;i++){// reverse the current group ok k
         nextNode=curr->next;
         curr->next=prev;
          prev=curr;
           curr= nextNode;
       }
        if(nextNode){
            head->next=reverseKGroup(nextNode, k);
        }
        return prev;
         
    }
};