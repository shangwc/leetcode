
/*
  解法2：思路：（双指针）一个指针（快指针）在前，逐个读取数据，遇到数据零则跳过（移动快指针而不移动慢指针），另一个（慢指针）逐个记录（覆盖重写）非零数据
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
