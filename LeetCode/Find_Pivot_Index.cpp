/* 
******
****** https://leetcode.com/problems/find-pivot-index/
******
*/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int leftSum = 0;

        for (const int &n : nums)
        {
            sum += n;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (sum - nums[i] - leftSum == leftSum)
                return i;
            leftSum += nums[i];
        }

        return -1;
    }
};