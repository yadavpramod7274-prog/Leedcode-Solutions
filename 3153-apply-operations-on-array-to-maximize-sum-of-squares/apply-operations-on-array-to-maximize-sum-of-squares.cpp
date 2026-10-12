class Solution {
public:
    int maxSum(vector<int>& nums, int k) {

        long long mod =1000000007;
       vector<int>count(31,0);
        for(int num:nums){
            for(int b=0;b<31;b++){
                if((num>>b)&1){
                    count[b]++;
                }
            }
        }
          long long result =0;
      while(k--){
      long long ans=0;
      for(int b=0;b<31;b++){
        if(count[b]>0){
           
            ans=(ans | (1 <<b));
              count[b]--;
        }
      }
     result= (result+( ans*ans) %mod)%mod;
      }
      return result;
    }
};