class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
      unordered_map<int,int>map;
      // map pair is <ele,freq>
        for(int ele :arr){
             map[ele]++;
        }

        // heap pair is <freq,ele>
         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; 
         for(auto x:map){
            int ele= x.first;
            int freq=x.second;
            pair<int,int> p={freq,ele};
             pq.push(p);
           //  pq.push({x.second,x.first});
           if(pq.size()>k) pq.pop();
         } 
         vector<int>ans;
         while(pq.size()>0){
            int ele= pq.top().second;
            ans.push_back(ele);
             pq.pop();
         }
         return ans;
    }
};