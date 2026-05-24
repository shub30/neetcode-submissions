#include<unordered_set>

class Solution 
{
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_set ans(nums.begin(), nums.end());
        return ans.size() != nums.size();
    }
};