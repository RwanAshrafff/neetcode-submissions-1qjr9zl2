class Solution {
public:
    int dp[1005];
    int minCostClimbingStairs(vector<int>& cost) {
        fill(dp,dp+1005,-1);
        int n =cost.size();
        return min(solve(0,n,cost),solve(1,n,cost));
    }
private:
    int solve(int idx,int n,vector<int>&cost){
        if(idx>=n) return 0;

        auto res=dp[idx];
        if(~res) return dp[idx];

        int op1=solve(idx+1,n,cost);
        int op2=solve(idx+2,n,cost);

        dp[idx]=cost[idx]+min(op1,op2);
        return dp[idx];
    }
};
