class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0,neg=0;
        //map<long int,int>mp1;
        for(auto it:nums) 
        {
            if(it>0)
            {
                pos++;
            }
            if(it<0)
            {
                neg++;
            }
            
        }
        
        return max(pos,neg);
        
    }
};