class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mp1;
        for(auto it:magazine)
        {
            mp1[it]++;
        }
        for(auto it:ransomNote)
        {
            if(mp1[it]<=0)
            {
                return false;
            }
            mp1[it]--;
        }
        return true;
    }
};