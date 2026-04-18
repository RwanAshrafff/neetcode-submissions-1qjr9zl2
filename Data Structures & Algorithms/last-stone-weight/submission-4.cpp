class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //if(stones.size()==2 && stones[0]==stones[1]) return 0;

        priority_queue<int>q;
        for (auto &i: stones) q.push(i);
        while(q.size()>1){
            int num1=q.top(); q.pop();
            int num2= q.top(); q.pop();
            if(num1>num2) q.push(num1-num2);
        }
        if(q.empty()) return 0;
        else return q.top();
    }
};
