class Solution {
public:
    void FindArea(vector<vector<int>>& grid, vector<vector<bool>>& needToCheck, int x, int y, int& area){
        if(grid[x][y]==1){
            area++;
            
            if(x>0){
                if(needToCheck[x-1][y]){
                    needToCheck[x-1][y]=false;
                    FindArea(grid, needToCheck, x-1, y, area);
                }
            }
            if(x<grid.size()-1){
                if(needToCheck[x+1][y]){
                    needToCheck[x+1][y]=false;
                    FindArea(grid, needToCheck, x+1, y, area);
                }
            }
            if(y>0){
                if(needToCheck[x][y-1]){
                    needToCheck[x][y-1]=false;
                    FindArea(grid, needToCheck, x, y-1, area);
                }
            }
            if(y<grid[0].size()-1){
                if(needToCheck[x][y+1]){
                    needToCheck[x][y+1]=false;
                    FindArea(grid, needToCheck, x, y+1, area);
                }
            }
            
        }
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int x = grid.size();
        int y = grid[0].size();
        vector<vector<bool>> needToCheck(x,vector<bool>(y,true));
        int maxArea(0);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(needToCheck[i][j]){
                    needToCheck[i][j]=false;
                    int area = 0;
                    FindArea(grid, needToCheck, i, j, area);
                    
                    if(area>maxArea)
                        maxArea=area;
                        
                }
            }
        }
        
        return maxArea;
    }
};
