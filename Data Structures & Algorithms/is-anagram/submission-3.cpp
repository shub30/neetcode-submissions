class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char,int> str1;
        unordered_map<char,int> str2;

        for(int i = 0; i < s.length(); i++)
        {
            str1[s[i]]++;
            str2[t[i]]++;
        }

        if(str1 == str2)
            return true;
        return false;
    }
};
