class Solution {
public:
    bool isPalindrome(string s) {
          int n=s.size();
       int j=n-1;
        for(int i=0;i<j;i++,j--){
            while( i<j && !isalnum(s[i])) i++;
            while( i<j &&!isalnum(s[j])) j--;

            if(tolower(s[i])!=tolower(s[j])) return false;
        }
        return true;
    }
};