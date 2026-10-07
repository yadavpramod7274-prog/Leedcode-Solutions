class Solution {
public:
vector<string> res;
 unordered_map<string,int >mp;
   int valid(string s){
     stack<char>st;
     int i=0;
     while(i<s.size()){
        if(s[i]=='(') st.push('(');
        else if (s[i]==')'){
            if(st.size()>0 && st.top()=='('){ 
                st.pop();
                }
              else st.push(')');
        }
        i++;
     }
     return st.size();
   }
    void sol(string s,int minInv){
         if(mp[s]!=0) return;
          else mp[s]++;
        if(minInv <0) return;
        if(minInv ==0){
            if(!valid(s)){
        
        res.push_back(s);
        }
        return ;
    }
   for(int i=0;i<s.size();i++){
    //  if( s[i]!='(' && s[i]!=')') continue; // skip braket
   //  if(i>0 && s[i]==s[i-1]) continue; // duplicateb element
    string left= s.substr(0,i);
     string right= s.substr(i+1);
      sol(left+right,minInv-1);
   }
   
   }
    vector<string> removeInvalidParentheses(string s) {
      
        sol( s,valid(s));
        //sort(res.begin(),res.end());
        // res.erase(unique(res.begin(),res.end()),res.end());
        return res;
    }
};