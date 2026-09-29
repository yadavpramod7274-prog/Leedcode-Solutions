class Solution {
public:
    int largestInteger(int num) {
      string s = to_string(num); // convert  string
    vector<char>arr(s.begin(),s.end()); // convert 
      // outer loop  i=0;
       // inner loop  j=i+1;
        for(int i=0;i<arr.size();i++){
             int max=i;
                for(int j=i+1;j<arr.size();j++){
                   // same priority (a-b)%2==0
                    if(arr[j]  > arr[max] && (arr[i]-arr[j])%2==0){
                        max=j;
                    } 
                }
                swap(arr[i],arr[max]);
        }
        int sum=0; // arr convert  number
        for(int i=0;i<arr.size();i++){
            sum= sum*10+arr[i]-'0';
        }
        return sum;
    }
};