class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int left = 0;
        int maxlen = 0;
        int maxcount = 0;

        int hash[26] = {0};

        for (int right = 0; right < s.size(); right++) {

            hash[s[right] - 'A']++;

            maxcount = max(maxcount, hash[s[right] - 'A']);

            while ((right - left + 1) - maxcount > k) {
                hash[s[left] - 'A']--;
                left++;
            }

            maxlen = max(maxlen, right - left + 1);
        }

        return maxlen;
    }
};