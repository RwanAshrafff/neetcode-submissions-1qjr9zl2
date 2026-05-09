class Solution {
public:
    vector<vector<int>>ans;
    vector<int>curr;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        solve(0,target,candidates,curr,ans);
        return ans;
    }
    void solve(int idx,int target,vector<int>& candidates
                ,vector<int>&curr,vector<vector<int>>&ans){
        if(target==0) {
            ans.push_back(curr);
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(candidates[i]>target) break;
            if(i>idx && candidates[i]==candidates[i-1]) continue;
            curr.push_back(candidates[i]);
            solve(i+1,target-candidates[i],candidates,curr,ans);
            curr.pop_back();
        }
    }
};
