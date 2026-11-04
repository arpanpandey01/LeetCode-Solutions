class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set <char> sub;
        int left = 0;
        int maxlen = 0;

        for (int i = 0; i < s.size(); i++) {
            
            while(sub.count(s[i])) {
                sub.erase(s[left]);
                left++;
            }

            sub.insert(s[i]);

            maxlen = max(maxlen, i - left + 1);
        }
        return maxlen;
    }
};