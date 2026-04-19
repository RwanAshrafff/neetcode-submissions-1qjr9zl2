class Solution {
public:
    int dp[100005];
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        fill (dp,dp+100005,-1);
        int ans=solve(coins,amount,n);
        if (ans==1e9) return -1;
        else return ans;
    }
    int solve(vector<int>&coins,int amount,int n){
        if(amount==0) return 0;
        if(amount<0) return 1e9;

        int &ret=dp[amount];
        if(~ret) return dp[amount];

        ret=1e9;
        for (int i=0;i<n;i++){ 
            ret=min(ret,solve(coins,amount-coins[i],n)+1);
            ret=min(ret,solve(coins,amount,n));
        }
        return dp[amount];
    }
};
