class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,maxi=0,ans=0;
        vector<int>freq(26,0);
        for(int r=0;r<s.size();r++){
            freq[s[r]-'A']++;

            maxi=max(maxi,freq[s[r]-'A']);
            while((r-l+1)-maxi>k){
                freq[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
