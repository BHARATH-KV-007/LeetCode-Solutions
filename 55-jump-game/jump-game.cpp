class Solution {
public:
    bool canJump(vector<int>& nums) {
        int stepleft=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            stepleft--;
            if(stepleft<0) return false;
            if(i==nums.size()-1) return true;
            if(nums[i]>stepleft)
            {
                stepleft=nums[i];
            }     
        }
        return true;
    }
};