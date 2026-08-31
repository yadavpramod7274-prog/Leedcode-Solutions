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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>nums;// vector me copy kiye hai ll
        ListNode*curr= head;
        while(curr){
           nums.push_back(curr->val);
             curr= curr->next;
        }
        int n= nums.size();
         vector<int>ans(n,0);// ans ko zero se intialise kiya h;
          stack<int>st;
        for(int i=0;i<n;i++){
                while(st.size()>0 &&  nums[i]>nums[st.top()]){
                   int x=st.top();
                    st.pop();
                    ans[x]=nums[i];
                }
                st.push(i);
        }
         return ans;
        }
        
};