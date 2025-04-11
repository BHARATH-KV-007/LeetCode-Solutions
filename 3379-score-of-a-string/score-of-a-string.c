int scoreOfString(char* s) {
    int sum=0;
    int strlength=strlen(s);
    for(int i=0;i<strlength-1;i++)
    {
        int diff=s[i]-s[i+1];
        if(diff<0)
        {
            diff=-1*diff;
        }
        sum=sum+diff;
    }
    return sum;
}