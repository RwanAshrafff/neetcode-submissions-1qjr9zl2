#include <cstring>
class Solution {
public:
    int dp[105][105];
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp,-1,sizeof(dp));
        int m=obstacleGrid.size(),b,n=obstacleGrid[0].size();
        return solve(0,0,m,n,obstacleGrid);
    }
    int solve(int r,int c,int m,int n,vector<vector<int>>& obstacleGrid){
        if(r>=m || c>=n|| obstacleGrid[r][c]==1) return 0;
        if(r==m-1 && c==n-1) return 1;

        int &ret=dp[r][c];
        if(~ret) return ret;

        ret=0;
        ret+=solve(r+1,c,m,n,obstacleGrid);
        ret+=solve(r,c+1,m,n,obstacleGrid);
        
        return ret;
    }
};