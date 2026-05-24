class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>> mStr;

        for(string s: strs)
        {
            string sorted = s;
            sort(sorted.begin(),sorted.end());
            mStr[sorted].push_back(s);            
        }

        vector<vector<string>> ans;
        for(auto &s: mStr)
        {
            ans.push_back(s.second);
        }
        return ans;
    }
};
