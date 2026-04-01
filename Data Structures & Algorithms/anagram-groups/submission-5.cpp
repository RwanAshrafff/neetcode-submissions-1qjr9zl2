class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>>ans(n);
        vector<bool>vis(n,0);
        vector<vector<string>>out;
        vector<string>copy;
        copy=strs;

        for (int i=0;i<n;i++) sort(copy[i].begin(),copy[i].end());

        for (int i=0;i<n;i++){
            if (!vis[i]){
                ans[i].push_back(strs[i]);
                vis[i]=1;
            }
           for (int j=i+1;j<n;j++){
                {
                    if (copy[i]==copy[j] && !vis[j]) {
                        ans[i].push_back(strs[j]);
                        vis[j]=1;
                }
            }
        }
        }
        for (auto &i:ans){
            if (! i.empty()) out.push_back(i);
        } 
        return out;
    }
};
