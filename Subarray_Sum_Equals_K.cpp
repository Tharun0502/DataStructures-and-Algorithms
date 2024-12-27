class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;

        int prefix=0;
        int c=0;
        mp[0]=1;

        for(int i=0;i<nums.size();i++)
        {
            prefix += nums[i];

            int remove = prefix-k;

            c += mp[remove];

            mp[prefix] += 1;
        }
        return c;
    }
};
