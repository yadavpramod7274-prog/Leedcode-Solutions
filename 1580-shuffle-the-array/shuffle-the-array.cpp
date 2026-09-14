class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // int n=nums.size();
             vector<int> ans1;
        
        for(int i=0;i<n;i++){
            ans1.push_back(nums[i]);
        }
       
       for(int i=n;i<nums.size();i++){
         ans1.push_back(nums[i]);
        }

        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){

         v.push_back({nums[i],nums[i+n]});
         
         }
         vector<int> ans;
          for(int i=0;i<v.size();i++){
            ans.push_back(v[i].first);
             ans.push_back(v[i].second);
          }
          return ans;
         }
};