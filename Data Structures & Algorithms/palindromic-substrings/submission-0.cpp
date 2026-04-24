class Solution {
public:
    int countSubstrings(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            ans+=solve(s,i,i);
            ans+=solve(s,i,i+1);
        }
        return ans;
    }
    int solve(string s,int l,int r){
       int cnt=0;
        while(s[l]==s[r] && r<s.length() && l>=0){
            l--;r++;cnt++;
        }
       return cnt;
    }
};
