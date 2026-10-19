class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
         int n=arr.size();
         vector<int>ans;
          for(int i=0;i<n;i++){
                 if(arr[i]==target){
                   ans.push_back(i);
                 }
            
          }
          return ans;
    }
};