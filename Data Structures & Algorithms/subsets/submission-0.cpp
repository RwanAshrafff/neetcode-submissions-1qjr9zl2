class Solution {
public:
    vector<int> curr;
    vector<vector<int>>res;

    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(0,curr,nums,res);
        return res;
    }
    
public:
    void backtrack(int idx,vector<int>&curr,vector<int>&nums,vector<vector<int>>&res){
        res.push_back(curr);
        for (int i=idx;i<nums.size();i++){
            curr.push_back(nums[i]);
            backtrack(i+1,curr,nums,res);
            curr.pop_back();
        }
    }
};
