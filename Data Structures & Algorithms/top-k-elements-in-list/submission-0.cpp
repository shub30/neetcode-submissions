class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> ret;
        priority_queue<pair<int,int>> ans;    
        unordered_map <int,int> mp;

        for(int i: nums)
        {
            mp[i]++;
        }

        for(auto &p: mp)
        {
            ans.push({p.second, p.first});
        }

        for(int i = 0; i < k; i++)
        {
            ret.push_back(ans.top().second);
            ans.pop();
        }
        return ret;
    }
};
