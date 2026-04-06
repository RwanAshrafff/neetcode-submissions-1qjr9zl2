class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int l=1,r=maxi,ans=maxi;

        while(l<=r){
            int mid=(l+r)/2;
            long long hrsneeded=0;
            for(int i=0 ;i< piles.size();i++){
                hrsneeded += ceil((double) piles[i] / mid);
            }
            if(hrsneeded>h) l=mid+1;
            else  ans=mid,r=mid-1;
        }
        return ans;
    }
};
