class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        
        for (int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
            if ( isalnum(s[i])) ans+=s[i];
        }
    int l=0,r=ans.size()-1,cnt=0;
    for (int i=0;i<ans.size();i++){
        if (ans[l]==ans[r]){
             cnt++;
             l++;
             r--;
        }
    }
    if(cnt==ans.size()) return true;
    else return false;
    }
};
