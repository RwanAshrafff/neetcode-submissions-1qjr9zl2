class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if (nums.size()==0) return 0;
        int n=nums.size();
        int cnt=1,maxi=1; 

        for (int i=1;i<n;i++){
            if (nums[i]==nums[i-1]) continue;

            if((abs(nums[i]-nums[i-1])==1)) cnt++;
            else{
                maxi=max(maxi,cnt);
                cnt=1;
            }
        }
        maxi=(max(cnt,maxi));
        return maxi;
    }
};
