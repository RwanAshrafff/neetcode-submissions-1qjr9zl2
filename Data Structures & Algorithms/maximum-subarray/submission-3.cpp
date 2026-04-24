class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=-2000,sum=0;
        for (int x:nums){
            sum+=x;
            if(sum>ans) ans=sum;
            if(sum<0) sum=0;
        }
        return ans;
    }
};
