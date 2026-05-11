class Solution {
public:
    int dp[105][105];
    int uniquePaths(int m, int n) {
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                dp[i][j]=-1;
            }
        }
        return solve(0,0,m,n);
    }
    int solve(int r,int c,int m,int n){
        if(r==(m-1) && c==(n-1)) return 1;
        if(r>=m || c>=n ) return 0;

        int &ret=dp[r][c];
        if(~ret) return ret;
        
        ret=0;
        ret+=solve(r+1,c,m,n);
        ret+=solve(r,c+1,m,n);
        
        return ret;
    }
};
