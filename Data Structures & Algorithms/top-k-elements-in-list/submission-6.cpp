class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int,int>mp;
        int n=nums.size();
        for (int i=0;i<n;i++) mp[nums[i]]++;
        vector<int>ans,temp;
        for(auto [x,y]:mp) temp.push_back(y);
        sort(temp.rbegin(),temp.rend());
        int copyk=0;
        for (int i=0;i<k;i++){
        for(auto [x,y]:mp){
                if (y==temp[i]){
                    ans.push_back(x);
            }
        }
        }
        sort(ans.begin(),ans.end());
        auto it = unique(ans.begin(), ans.end());
        ans.erase(it, ans.end());
        return ans;
    }
};
