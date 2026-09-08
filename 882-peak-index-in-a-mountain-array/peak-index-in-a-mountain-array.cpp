class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int lo=1;
        int hi=n-2;
        while(lo<=hi){
            int m=lo+(hi-lo)/2;
            if(arr[m-1]<arr[m] && arr[m]>arr[m+1]) return m;
             else if (arr[m+1]>arr[m]) lo=m+1;
             else hi=m-1;
        }
        return 200;
    }
};