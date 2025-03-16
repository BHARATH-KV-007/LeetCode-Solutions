class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp1;
        for(auto it:nums) mp1[it]++;
        for(auto it:mp1)
        {
            if(it.second==1)
            return it.first;
        }
        return -1;
        
    }
};