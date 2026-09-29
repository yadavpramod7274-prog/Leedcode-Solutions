class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int idx=0;
       for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[idx])
             idx=i;
       } 
       for(int j=0;j<nums.size();j++){
         if( idx!=j && nums[idx] < 2*nums[j]) return -1;
       }
       return idx;
    }
};