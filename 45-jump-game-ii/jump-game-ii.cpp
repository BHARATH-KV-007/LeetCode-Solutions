class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0;
        int endgroup=0;
        int maxgroup=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            maxgroup=max(maxgroup,(nums[i]+i));
            if(i==endgroup)
            {
                endgroup=maxgroup;
                jump++;
            }
        }
        return jump;
        
    }
};