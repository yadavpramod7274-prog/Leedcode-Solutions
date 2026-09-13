class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n= digits.size();
    //  int j=0;
      for(int i=n-1;i>=0;i--){
        if(digits[i]==9) { 
          digits[i]=0;
          }
          else{  digits[i]=digits[i]+1;
                 return digits;

             }
        }
        
       vector<int> p={};
       p.push_back(1);
        for(int i=0;i<n;i++){
            p.push_back(0);  
        }
        return p;
       
    }
}; 