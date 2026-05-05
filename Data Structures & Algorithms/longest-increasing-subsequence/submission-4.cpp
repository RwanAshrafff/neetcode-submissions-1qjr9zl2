#include <cstring>
class Solution {
public:
    int dp[1000][1000];
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        memset(dp, -1, sizeof(dp));
        return solve(0,0,n,nums);
    }
    int solve(int idx , int prev,int n,vector<int>& nums){
        if(idx==n) return 0;

        int &ret=dp[idx][prev];
        if(~ret) return dp[idx][prev];

        int skip=solve(idx+1,prev,n,nums);
        int take=0;
        if(prev==0 || nums[idx]>nums[prev-1])  take=solve(idx+1,idx+1,n,nums)+1;
        ret=max(take,skip);
        return ret;
    }
};
