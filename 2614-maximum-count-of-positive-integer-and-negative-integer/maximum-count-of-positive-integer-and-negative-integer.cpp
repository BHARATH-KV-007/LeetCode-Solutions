class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0,neg=0;
        //map<long int,int>mp1;
        for(auto it:nums) 
        {
            pos=pos+(it>0);
            neg=neg+(it<0);
        }
        
        return max(pos,neg);
        
    }
};