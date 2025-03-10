class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp1;
       for(auto it:nums) mp1[it]++;
        int n=nums.size()/2;
        for(auto it:mp1) 
        {
            if(it.second>n)
            {
                return it.first;
            }
        }
        return 0;
        
    }
};