class Solution {
public:
    vector<vector<int>>ans;
    vector<vector<int>> permute(vector<int>& nums) {
        backtrack(0,nums,ans);
        return ans;
    }

    void backtrack(int idx,vector<int>& nums,vector<vector<int>>& ans){
        if(nums.size()==idx){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            backtrack(idx+1,nums,ans);
            swap(nums[idx],nums[i]);
        }
    }
};
