class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>prefmin(n);
       prefmin[0]=prices[0];
      
        for(int i=1;i<n;i++){
            prefmin[i]= min( prefmin[i-1],prices[i]);
        }
        int profit=0;
         for(int i=1;i<n;i++){
            profit= max(profit,prices[i]-prefmin[i]);
        }
        return profit ;
    }
};