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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
         ListNode* A=NULL;
         ListNode* B=NULL;
         // loop chalega
        // index a-1 and b+1
         for(int i=0;i<=b;i++){
            if(i==a-1){
                A=temp;
            }
            temp=temp->next;
         }
         B=temp;// bke  thik bad
         A->next=list2; // list 2 ka head;
          ListNode* curr=list2; //list2 ka tail;
          while(curr->next){
            curr=curr->next;
          }
          curr->next=B;
           return list1;
    }
};