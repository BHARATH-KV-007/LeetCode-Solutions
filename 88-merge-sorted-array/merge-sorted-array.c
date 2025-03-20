void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    for(int j=0,i=m;j<n;j++)
    {
        nums1[i]=nums2[j];
        i++;
    }
    for(int i=0;i<m+n;i++)
    {
        for(int k=i+1;k<m+n;k++)
        {
            if(nums1[i]>nums1[k])
            {
                int temp=nums1[i];
                nums1[i]=nums1[k];
                nums1[k]=temp;
            }
        }
    }
    
}