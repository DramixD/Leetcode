//recursion

class Solution {
public:
    void fc(vector<vector<int>>& grid, int a, int b, int& ans){
        grid[a][b]=2;
        if(a!=0){
            if(grid[a-1][b]==0) ans++;
            else if(grid[a-1][b]==1) fc(grid, a-1, b, ans);
        }else ans++;
        if(b!=0){
            if(grid[a][b-1]==0) ans++;
            else if(grid[a][b-1]==1) fc(grid, a, b-1, ans);
        }else ans++;
        if(a!=grid.size()-1){
            if(grid[a+1][b]==0) ans++;
            else if(grid[a+1][b]==1) fc(grid, a+1, b, ans);
        }else ans++;
        if(b!=grid[0].size()-1){
            if(grid[a][b+1]==0) ans++;
            else if(grid[a][b+1]==1) fc(grid, a, b+1, ans);
        }else ans++;
    }
    
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int h(grid.size()), l(grid[0].size());
        int i=0,j=0;
        while(grid[i][j]==0){
            j++;
            if(j==l){
                i++;
                j=0;
            }
            if(i==h)return 0;
        }
        int ans(0);
        fc(grid, i, j, ans);
        return ans;
    }
};
