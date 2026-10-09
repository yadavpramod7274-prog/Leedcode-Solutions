class Solution {
public:
    int minInsertions(string s) {
  int count=0;
    int ans=0;

     for(int i=0;i<s.size();i++){
         if(s[i]=='('){
            count++;
             }
             else {
                 if(  i+1<s.size() && s[i+1]==')'){
                    i++;
                    }
                  else ans++;
             
         
        
          //if (count==0) ans++;
         if(count>0){
            count--;
         }
         else ans++;
             }
     }
     ans =ans+ 2*count;
      return ans;
         
     }
        
         
};