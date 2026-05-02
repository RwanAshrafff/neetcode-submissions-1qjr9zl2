class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int>vis(n,0);
        queue<int>q;
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]) {
                q.push(i);
                vis[i]=1;
                ans++;

                while(!q.empty()){
                    auto node=q.front(); q.pop();
                    for(auto &child:adj[node]){
                        if(!vis[child]){
                            vis[child]=1;
                            q.push(child);
                        }
                    }
                }
            }
        }
        return ans;
    }
};
