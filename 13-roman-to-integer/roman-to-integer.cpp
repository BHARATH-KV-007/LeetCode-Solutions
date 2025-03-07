class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp1
        {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int result=0;
        int prev=0;
        for(int i=s.size()-1;i>=0;i--)
        {
           int current=mp1[s[i]];
           if(prev>current)
           {
            result=result-current;
           } 
           else
           {
            result=result+current;
           }
           prev=current;
        }
        return result;
    }
};