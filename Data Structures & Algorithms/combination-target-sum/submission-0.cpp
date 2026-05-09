class Solution {
public:
    vector<vector<int>>ans;
    vector<int>curr;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        solve(0,target,nums,curr,ans);
        return ans;
    }
    void solve(int idx,int target,vector<int>& nums,vector<int>&curr,vector<vector<int>>&ans){
        if(idx==nums.size() || target<0) return ;
        if(target==0){
            ans.push_back(curr);
            return;
        }

        curr.push_back(nums[idx]);
        solve(idx,target-nums[idx],nums,curr,ans);
        curr.pop_back();
        solve(idx+1,target,nums,curr,ans);
    }
};
