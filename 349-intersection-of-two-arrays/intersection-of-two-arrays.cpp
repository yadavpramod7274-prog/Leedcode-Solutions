class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
          
         unordered_set<int>st1;
          for(auto x:nums1){
            st1.insert(x);
          }
          unordered_set<int>st2;
          for(auto x:nums2){
            st2.insert(x);
          }
          vector<int>ans;
           for(auto x:st1){
            if(st2.find(x)!=st2.end()) ans.push_back(x);
           }
           return ans;
    }
};