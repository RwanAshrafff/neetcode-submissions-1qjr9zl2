class Solution {
public:
    int dp[100];
    int climbStairs(int n) {
        for(int i=0;i<=n;i++) dp[i]=-1;
        return solve(n);
    }
private:
    int solve(int num)
    {
        if(num<=1) return 1;

        int &res=dp[num];
        if(~res) return res;

        dp[num]=solve(num-1)+ solve(num-2);
        return dp[num];
    }
};
