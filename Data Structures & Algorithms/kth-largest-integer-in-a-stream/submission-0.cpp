class KthLargest {
public:
    priority_queue<int,vector<int>,greater<>>pq;
    int szk;
    KthLargest(int k, vector<int>& nums) {
        szk=k;
        for(auto &x:nums) add(x);
    }
    
    int add(int val) {
        pq.push(val);
        while(pq.size()>szk) pq.pop();
        return pq.top(); 
    }
};
