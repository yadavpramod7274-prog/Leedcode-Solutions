class Solution {
public:
    int rev(int n){
        int r=0;
     while(n!=0) { 
          r*=10;
         r+=n%10;
          n/=10;
    }
    return r;
    }
   
    int countNicePairs(vector<int>& nums) {
          int n= nums.size();
          int c=0;
          unordered_map<int,int> m;
           for(int i=0;i<n;i++){
               nums[i]-=rev(nums[i]);
           }
            for(int i=0;i<n;i++){
               if(m.find(nums[i])!=m.end()){
                c=c%1000000007;

                 c+=m[nums[i]];
                 m[nums[i]]++;
               }
           
           else m[nums[i]]++;
            }
           return c%1000000007;
    }
};