class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix[0].size(),m=matrix.size();
        int l=0,r=(n*m)-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            int rw=mid/n;
            int c=mid%n;
            int val=matrix[rw][c];

            if(val==target) return true;
            else if(val>target) r=mid-1;
            else l=mid+1;
        }
    return false;
    }
};
