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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dHead= new ListNode(0);
        ListNode* curr=dHead;
        int carry=0;
        while(l1!=0 ||l2!=0 || carry!=0){
            int a=(l1!=0)? l1->val :0;
          int b=(l2!=0)? l2->val :0;
          int sum=carry+a+b;
          carry=sum/10;
          curr->next=new ListNode(sum%10);
          curr=curr->next;
          if(l1!=0){
            l1=l1->next;
          }
           if(l2!=0){
            l2=l2->next;
          }
        }
        return dHead->next;
    }
};