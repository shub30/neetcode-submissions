class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int> ans;
        for(int n: nums)
        {
            if(ans[n] > 0)
                return true;
            
            ans[n]++;
        }
        
    return false;
    }
};