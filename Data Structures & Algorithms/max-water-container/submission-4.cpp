class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1,ans=0;
        while(l<r){
            int area= (r-l) * min(heights[l],heights[r]);
            ans=max(ans,area);
            if(heights[r]>heights[l]) l++;
            else r--;
        }
        return ans;
    }
};
