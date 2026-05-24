class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int longest = 0;
        unordered_set<int> s(nums.begin(), nums.end());

        for(int x: nums)
        {
            if(s.find(x-1) == s.end())
            {
                int curr = x;
                int length = 1;
                while(s.find(curr+1) != s.end())
                {
                    curr++;
                    length++;
                }
                longest = max(longest,length);
            }
        }
    return longest;
    }
};
