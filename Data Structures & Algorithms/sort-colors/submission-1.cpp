class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;
        for(auto &i:nums) mp[i]++;
        int idx=0;
        for(auto[x,y]:mp){
            cout<<x<<" "<<y<<" ";
            for(int i=0;i<y;i++) nums[idx++]=x;
        }
    }
};