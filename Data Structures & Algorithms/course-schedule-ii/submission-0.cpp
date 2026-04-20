class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>indegree(numCourses,0);
        for(auto &i : prerequisites){
            int u=i[0];
            int v=i[1];
            adj[v].push_back(u);
            indegree[u]++;
        }
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();q.pop();
            ans.push_back(node);
            for(auto &child:adj[node]){
                indegree[child]--;
                 if(indegree[child]==0) q.push(child);
            }
        }
        if (ans.size()!=numCourses) return {};
        else return ans;
    }
};
