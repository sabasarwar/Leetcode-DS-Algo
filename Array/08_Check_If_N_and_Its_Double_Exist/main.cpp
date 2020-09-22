/* ---------------------------------------- Problem Statement ------------------------------------
Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).

More formally check if there exists two indices i and j such that :

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
 

Example 1:

Input: arr = [10,2,5,3]
Output: true
Explanation: N = 10 is the double of M = 5,that is, 10 = 2 * 5.
-------------------------------------------------------------------------------------------------*/

class Solution 
{
public:
    bool checkIfExist(vector<int>& arr) 
    {
        if(arr.size() == 0)
            return false;
        
        for(int i=0 ; i<arr.size() ; i++)
        {
            for(int j=0 ; j<arr.size() ; j++)
            {
                if(i!=j)
                {
                    if(arr[i] == 2*arr[j])
                        return true;
                }
            }
        }
        return false;
    }
};
