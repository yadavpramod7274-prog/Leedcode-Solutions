class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>&arr) {
       int n= arr.size();
       int count=0;
       unordered_set<string> s; 
         for(int j=0;j<n;j++){
           string rev =arr[j]; 
           reverse(rev.begin(),rev.end());
           if(arr[j]==rev) continue;
           if(s.find(rev)!=s.end()) count++;
            else s.insert(arr[j]);
         
      }
      return count; 
    }
}; 