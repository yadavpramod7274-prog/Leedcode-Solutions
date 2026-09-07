class Solution {
public:
    bool validateStackSequences(vector<int>& push, vector<int>& pop) {
        stack<int> st;
        int a=0;
         for(int i=0;i<push.size();i++){
            int x=push[i];
             st.push(x);
         
         while(st.size() && st.top()==pop[a]){
            st.pop();
             a++;
         }
         }
         
          return st.size()==0;
    }
};