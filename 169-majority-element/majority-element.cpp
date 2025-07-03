class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp1;
        for(int i=0;i<nums.size();i++)
        {
            mp1[nums[i]]++;
        }
        int n=nums.size()/2;
        for(auto it:mp1)
        {
            if(it.second>n)
            {
               return  it.first;
            }
        }
        return 0;
        
    }
};