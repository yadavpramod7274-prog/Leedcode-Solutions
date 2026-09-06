class Solution {
public:
    int evalRPN(vector<string>& t) {
         stack<int>st;
        int n=t.size();
         for(int i=0;i<n;i++){
            string s=t[i];
            if(s=="+" || s=="-" || s=="*" || s=="/"){
                int a =st.top(); st.pop(); //pahale value
                 int  b=st.top(); st.pop();//

                 if(s=="+" ) st.push(b+a);
                    if(s=="-" ) st.push(b-a);
                    if(s=="*" ) st.push(b*a); 
                     if(s=="/" ) st.push(b/a);

            }
            else{
                st.push(stoi(s));
            }
         }
         return st.top();
    }
};