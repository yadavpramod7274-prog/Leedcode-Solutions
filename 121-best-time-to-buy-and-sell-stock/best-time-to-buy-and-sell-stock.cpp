class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lo=prices[0];
         int po=0;
         for(int i=1;i<prices.size();i++){
             if(lo > prices[i]){
                 lo=prices[i];
             }
             else if(po < prices[i]-lo){
                 po= prices[i]-lo;
             }
         }
         return po;
    }
};