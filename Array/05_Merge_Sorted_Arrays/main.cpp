/* ---------------------------------------- Problem Statement ------------------------------------

Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:

The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is equal to m + n) to hold additional elements from nums2.
Example:

Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3

Output: [1,2,2,3,5,6]
-------------------------------------------------------------------------------------------------*/


class Solution 
{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        vector<int> res(m+n,0);;
        int k=0;
        int i=0,j=0;
        while(i<m and j<n)
        {
            if(nums1[i]<nums2[j])
                res[k]=nums1[i],i++;
            else
                res[k]=nums2[j],j++;
            k++;
        }
        while(i<m)
            res[k++]=nums1[i++];
        while(j<n)
            res[k++]=nums2[j++];
        nums1=res;    
    }
};
