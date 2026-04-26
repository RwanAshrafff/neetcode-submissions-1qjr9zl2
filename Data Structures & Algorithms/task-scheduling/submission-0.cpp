class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<int,int>mp;
        for(auto i:tasks) mp[i]++;
        priority_queue<int>pq;
        for(auto[x,y]:mp) {
            if(y>0) pq.push(y);
        }
        queue<pair<int,int>>cool;
        int ans=0;
        while(!pq.empty() || ! cool.empty()){
            ans++;
            if(!pq.empty()){
                int rem=pq.top()-1;
                pq.pop();
                if(rem>0) cool.push({rem,ans+n});
            }
            if(!cool.empty() && cool.front().second==ans)
            {
                pq.push(cool.front().first);
                cool.pop();
            }
        }
        return ans;
    }
};
