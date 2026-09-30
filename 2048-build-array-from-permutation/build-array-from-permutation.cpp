class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int i=0;
        int n =nums.size();
         vector<int>ans;
       
         while(n>i){
            ans.push_back(nums[nums[i]]);
            i++;
         }
         return ans;
    }
};