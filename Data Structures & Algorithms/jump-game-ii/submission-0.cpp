class Solution {
public:
    int jump(vector<int>& nums) {
        int n =nums.size();
        int jp=0,curred=0,far=0;
        for(int i=0;i<n-1;i++){
            far=max(far,i+nums[i]);
            if(i==curred) {
                jp++;
                curred=far;
            }
            if(far>=n) break;
        }
        return jp;
    }
};
