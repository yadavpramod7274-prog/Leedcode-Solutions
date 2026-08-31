class Solution {
public:
    bool isValid(string s) {
         if(s.size()%2!=0) return false;
       stack <char> st;
       for(int i=0;i<s.size();i++){
         char c=s[i];
        if(c=='('|| c=='{' || c=='['){
            st.push(c);
        }
        else{ // s[i]==')'
          
            if(st.size()==0) return false;
        char top=st.top();
        
         if((c==')' && top=='(')||( c=='}' && top=='{') ||( c==']' && top=='[')){
            st.pop();
            }
            else {
                return false;
                }
        }
       }
      return !st.size();
     
    }
};