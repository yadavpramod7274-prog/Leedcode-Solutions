class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        int n= arr.size();
     vector <int> nge(n,-1);
          stack<int> st;
           nge[n-1]=-1;
            st.push(arr[n-1]);
            for(int i=2*n-1;i>=0;i--){
                int idx=i%n;
              // pop all the element smaller than arr[i];
              while( st.size()>0 && st.top()<=arr[idx]){
                st.pop();
                  }
                  // mark the array;
               if(st.size()==0)  nge[idx]=-1;  
                else nge[idx]=st.top();
                // push the arr[i]
                 st.push(arr[idx]);
            
            }
                            return nge;
           
    }
};