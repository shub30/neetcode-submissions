class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            int comp = target - nums[i];

            if(ans.count(comp))
                return {ans[comp], i};
            
            ans[nums[i]] = i;
        }   
        return {}; 
    }
};
