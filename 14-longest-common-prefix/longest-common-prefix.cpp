class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        return "";
        sort(strs.begin(),strs.end());
        string s1=strs[0];
        string s2=strs[strs.size()-1];
        string op="";

        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]==s2[i])
            {
                op=op+s1[i];
            }
            else
            {
                break;
            }
        }
        return op;
    }
};