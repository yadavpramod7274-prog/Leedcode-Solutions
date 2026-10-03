class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
         int maxs=INT_MIN;
            int sum=0;
             for(int j=0;j<n;j++){
                 sum+=arr[j];  
                    maxs=max(sum,maxs);
            if(sum<0) sum=0;
         }
         return maxs;
    }
};