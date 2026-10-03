class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lo=INT_MAX;
        int max=0;
        for(int i=0;i<prices.size();i++){
            if(lo>prices[i]){
                lo=prices[i];
            }
            else if(prices[i]-lo >max){
                max=prices[i]-lo;
            }
        }
        return max;
    }
};