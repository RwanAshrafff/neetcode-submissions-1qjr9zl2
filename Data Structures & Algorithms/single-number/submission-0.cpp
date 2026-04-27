class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(auto i: nums) mp[i]++;
        for(auto [x,y]:mp) if(y==1) return x;
    }
};
