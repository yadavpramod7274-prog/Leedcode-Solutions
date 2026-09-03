class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(st.size()!=0 && st.top()==c){
                st.pop();
            }
            else{
                
                 st.push(c);

               
            }
        }
        string y;
        while(st.size()!=0){
            y+=st.top();
             st.pop();
        }
        reverse(y.begin(),y.end());
        return y;   
    }
};