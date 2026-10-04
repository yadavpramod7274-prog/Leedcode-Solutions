class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size();
if(n==0) return 0;
       unordered_map<char,int> mp;
        int lo=0;
        int ri=0;
          int maxlen=1;
       while(ri<n){
           if(mp.count(s[ri])){
           int idx=mp[s[ri]];
           maxlen=max(maxlen,ri-lo);
            if(idx>=lo)lo=idx+1;
      
         
           } 
           mp[s[ri]]=ri;
            ri++;
          
        }
          maxlen=max(maxlen,ri-lo);
        return maxlen;
    }
};