class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        bool flg=0,cnt=0;
        stack<int>st;
        vector<int>ans;
        for (int i=0;i<n-1;i++){
            flg=0;
            for (int j=i+1;j<n;j++){
                if (temperatures[j]<=temperatures[i]){ //43<=32
                    st.push(temperatures[j]);
                }
                else{ //warmer
                    flg=1;
                    break;
                }
            }
            if(flg) {
                ans.push_back(st.size()+1);
            }
            else ans.push_back(0);
            while(!st.empty()){
                st.pop();
            }
        }
        ans.push_back(0);
        return ans;
    }
};
