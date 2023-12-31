/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non - zero elemement
                        Note that you must do this in-place without making a copy of the array.
Example 1 :

    Input : nums = [ 0, 1, 0, 3, 12 ] Output : [ 1, 3, 12, 0, 0 ] Example 2 :

    Input : nums = [0] Output : [0] */

// C++ Program to move all
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        for (; j < n; j++)
        {
            nums[j] = 0;
        }
    }
};