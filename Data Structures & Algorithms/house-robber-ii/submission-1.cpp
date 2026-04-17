class Solution {
public:
    int dp[105];
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        fill(dp,dp+n+5,-1);
        int ans1=solve(0,n-2,nums);
        fill(dp,dp+n+5,-1);
        int ans2=solve(1,n-1,nums);

        return max(ans1,ans2);
    }
private:
    int solve(int idx,int n,vector<int>&nums){
        if(idx>n) return 0;

        int &ret=dp[idx];
        if(~ret) return dp[idx];

        int op1=solve(idx+2,n,nums)+nums[idx];
        int op2=solve(idx+1,n,nums);
        dp[idx]=max(op1,op2);
        return dp[idx];
    }
};
