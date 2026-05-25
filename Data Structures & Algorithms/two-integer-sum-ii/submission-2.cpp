class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        unordered_map<int,int> ans;
        for(int i = 0; i < numbers.size(); i++)
        {
            int req = target - numbers[i];
            if(ans.count(req))
                return {ans[req], i + 1};
            ans[numbers[i]] = i + 1;
        }
        return {};
    }
};
