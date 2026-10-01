class Solution {
public:
   

    string reverseStr(string s, int k) {
        int n = s.size();
    
      for(int i=0;i<n;i+=2*k){
       int x=i;
       int y= min(i+k-1,(int)n-1);
        while(x<y){
            swap(s[x],s[y]);
             x++;
             y--;
        } 
      }
      return s;
    }
};