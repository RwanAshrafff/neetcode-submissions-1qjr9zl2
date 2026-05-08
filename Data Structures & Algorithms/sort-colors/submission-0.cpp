class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[j]>nums[i]) {
                    int x=nums[i];
                    nums[i]=nums[j];
                    nums[j]=x;
                }
            }
        }
    }
};