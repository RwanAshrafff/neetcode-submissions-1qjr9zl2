#include <cstring>
class Solution {
public:
    int dp[1005][1005];
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        int ans=solve(0,0,text1,text2);
        return ans;
    }
    int solve(int idx,int idx2,string& text1, string& text2){
        if(idx>=text1.size() ||  idx2>=text2.size()) return 0;

        int &ret=dp[idx][idx2];
        if(~ret) return ret;

        ret=0;
        if(text1[idx]==text2[idx2]) ret=solve(idx+1,idx2+1,text1,text2)+1;
        else {
            ret=max(solve(idx+1,idx2,text1,text2),solve(idx,idx2+1,text1,text2));
        }

        return ret;
    }
};
