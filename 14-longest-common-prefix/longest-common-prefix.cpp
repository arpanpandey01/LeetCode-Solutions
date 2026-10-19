class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.empty())
            return "";

        string s = strs[0];
        string ans = "";

        for (int i = 0; i < s.length(); i++) {

            for (int j = 1; j < strs.size(); j++) {

                if (i >= strs[j].length() || s[i] != strs[j][i])
                    return ans;
            }

            ans += s[i];
        }

        return ans;
    }
};