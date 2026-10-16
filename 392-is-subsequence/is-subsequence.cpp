class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0;
        int j = 0;
        int flag = 0;

        while (j < t.size()) {

            if (s[i] == t[j]) {
                i++;
                j++;
                flag++;
            }
            else 
                j++;
        }

        if (flag == s.size())
            return true;
        else 
            return false;    
    }
};