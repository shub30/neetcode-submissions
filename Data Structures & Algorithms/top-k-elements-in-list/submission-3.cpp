class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> count;
        for(const auto &s: nums)
        {
            count[s]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> tmpQueue;
        for(auto &s: count)
        {
            tmpQueue.push({s.second,s.first});
            if(tmpQueue.size() > k)
                tmpQueue.pop();
        }

        vector<int> ans;
        for(int i = 0; i < k; i++)
        {
            ans.push_back(tmpQueue.top().second);
            tmpQueue.pop();
        }
        return ans;
    }
};