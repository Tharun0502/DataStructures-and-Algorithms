class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(i<nums.size() && j<nums.size())
        {
            if(nums[i] != 0) i++;
            if(nums[j] == 0) j++;

            if((i<nums.size() && j<nums.size()) && (i < j))
            {
                swap(nums[i],nums[j]);
            }
            j++;
        }
    }
};
