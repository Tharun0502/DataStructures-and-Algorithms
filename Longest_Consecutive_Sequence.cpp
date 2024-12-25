class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n == 0) return 0;
        int longest=0;
        unordered_set<int> res;
        for(int i=0;i<n;i++)
        {
            res.insert(nums[i]);
        }

        for(int i : nums)
        {
            if(res.find(i-1) == res.end())
            {
                int curr=i;
                int cur=1;
                while(res.find(curr+1) != res.end())
                {
                    curr++;
                    cur++;
                }
                longest=max(longest,cur);
            }
            
        }
        return longest;
    }
};
