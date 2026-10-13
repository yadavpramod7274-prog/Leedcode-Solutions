class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
       vector<long long>p(n);

       for(int i=0;i<n;i++){
            p[i] = 1LL* nums[i]*nums[i];
               }
       sort( p.begin(),p.end());
        // for half positive and half negative
      int x=(n+1)/2;
        long long ans=0;
        for(int i=0;i<n;i++){
             if(i < n- x) ans-=p[i];
             else  ans+=p[i];
        }
       return ans;
    }
};