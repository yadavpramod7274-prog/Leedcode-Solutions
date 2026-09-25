class Solution {
public:
    int kthSmallest(vector<vector<int>>& arr, int k) {
        // hint tc =  

        int n=arr.size(); int m=arr[0].size();
        priority_queue<int>pq;
           for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
               pq.push(arr[i][j]);
             if(pq.size()>k) pq.pop();
           }
           }
           return pq.top();
    }
};