class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n= grid.size();
          int m= grid[0].size();
         int r=0;
        int c=0;
        vector<vector<bool>>k(n,vector<bool>(m,false));
         while(true){
             k[r][c]=true;
             int a=r,b=c;
               if(grid[a][b]=='L') b--;
              else  if(grid[a][b]=='R') b++;
             else   if(grid[a][b]=='U') a--;
               else if(grid[a][b]=='D') a++;

             if(a<0 ||a>=n || b<0 || b>=m || k[a][b]){
    
               
                   return {r,c};
               }
               r=a;
              c=b; 
          }
       
       return { }; 
    }
};