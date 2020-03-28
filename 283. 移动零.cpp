
/*
  解法2：思路：（双指针）
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int m = 0,n = 0;
        for(;m<nums.size();m++)
        {
            if(nums[m] != 0)
            {
                nums[n++] = nums[m];
            }
        }
        for(;n<nums.size();n++)
        {
            nums[n] = 0;
        }
    }
};
