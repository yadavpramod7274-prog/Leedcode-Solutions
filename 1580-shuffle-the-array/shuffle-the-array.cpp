class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;
        int j=n;
         int  m=nums.size();
        vector<int> ans;
        while(i<n && j<m){
            ans.push_back(nums[i]);
             ans.push_back(nums[j]);
            i++;
            j++;
        }
        return ans;
    }
};