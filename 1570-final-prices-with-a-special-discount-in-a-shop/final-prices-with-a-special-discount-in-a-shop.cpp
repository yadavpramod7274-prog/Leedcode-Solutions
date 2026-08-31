class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
        int n=arr.size();
          if(n==0) return{};
     //nge[n-1]=n;
   //st.arr[0]=0;
       
          stack<int> st;

            for(int i=0;i<n;i++){
              // pop all the element smaller than arr[i];
              while( st.size()>0 && arr[st.top()]>=arr[i]){
                 int x=st.top();
                st.pop();
                arr[x]-=arr[i];
                  }
             st.push(i);
            }
          
           // if(n==0) return{};
            return arr;
    }
};