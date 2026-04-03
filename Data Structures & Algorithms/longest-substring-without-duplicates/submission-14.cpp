class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int l=0,ans=0;
        for(int r=0;r<s.size();r++){

            while(mp[s[r]]>0){
                    mp[s[l]]--;
                    l++;
                }

                mp[s[r]]++;
                ans=max(ans,r-l+1);
            }
         return ans;
        }
    };
