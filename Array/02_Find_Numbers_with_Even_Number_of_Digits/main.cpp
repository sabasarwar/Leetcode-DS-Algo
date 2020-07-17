/* ---------------------------------------- Problem Statement ------------------------------------

Given an array nums of integers, return how many of them contain an even number of digits.
 

Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.

-------------------------------------------------------------------------------------------------*/

class Solution 
{
public:
    int findNumbers(vector<int>& nums) 
    {
        int n=nums.size();
        int count[n];
        int res=0;
        
        for(int i=0 ; i<n ; i++)
        {
            count[i]=0;
            while(nums[i])
            {
                nums[i]=nums[i]/10;
                count[i]++;
            }
        }
        
        for(int j=0 ; j<n ; j++)
        {
            if(count[j]%2 == 0)
            {
                res++;
            }
        }
        
        return res;
    }
};

