class Solution {
public:
    int countDigits(int num) {
       int c=0;
       int p=num;
         while(p>0){
            int x=p%10;
         
             if( x!=0 && num%x==0) c++;
               p/=10;
         }
       
     return c;
    }
};