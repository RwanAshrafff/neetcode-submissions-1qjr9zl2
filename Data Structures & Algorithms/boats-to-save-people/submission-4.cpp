class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ptr=0,ptr2=people.size()-1,cnt=0;
        sort(people.begin(),people.end());
        while(ptr<=ptr2){
            if(people[ptr]+people[ptr2]<=limit) ptr++;
            ptr2--;
            cnt++;
        }
        return cnt;
    }
};