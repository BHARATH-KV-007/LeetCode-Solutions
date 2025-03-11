class Solution {
public:
    int lengthOfLastWord(string s) {
        while(!s.empty()&& s.back()==' ')
        {
            s.pop_back();
        }
        int count=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                return count;
            }
            count++;
        }
        return count;
        
    }
};