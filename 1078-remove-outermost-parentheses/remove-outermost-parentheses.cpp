class Solution {
public:
    string removeOuterParentheses(string s) {
         string ans;
        stack<char>st;
        for(auto c : s){
              if(c==')') st.pop();
             
                if(st.size()!=0){
                    ans.push_back(c);
                }
            
                 if(c=='(') st.push(c);
        }
        return ans;
    }
};