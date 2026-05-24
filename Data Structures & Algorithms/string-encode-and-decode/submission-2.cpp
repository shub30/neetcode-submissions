class Solution {
public:

    string encode(vector<string>& strs) 
    {
       string strEncode;
       
        for(int i = 0; i < strs.size(); i++)
        {
            strEncode.append(to_string(strs[i].size()));
            strEncode.append("#");
            strEncode.append(strs[i]);
        }

        return strEncode;
    }

    vector<string> decode(string s) 
    {
        vector<string> vDecode;
        
        int i = 0;
        while(i < s.length())
        {
            int j = i;

            while(s[j] != '#')
                j++;
            
            int len = stoi(s.substr(i, j-i));
            j++;

            vDecode.push_back(s.substr(j, len));
            i = j + len;
        }

        return vDecode;
    }
};
