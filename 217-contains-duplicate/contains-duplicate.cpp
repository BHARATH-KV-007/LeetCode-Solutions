class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp1;
        for(auto it:nums) mp1[it]++;
        for(auto it:mp1)
        {
            if(it.second!=1)
            {
                return true;
            }
        }
        return false;
        
    }
};