class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        unordered_map <char, int> hash1;
        unordered_map <char, int> hash2;

        if (s1.size() > s2.size())
            return false;

        for (int i = 0; i < s1.size(); i++) {
            hash1[s1[i]]++;
        }

        for (int i = 0; i < s1.size(); i++) {
            hash2[s2[i]]++;
        }

        if (hash1 == hash2)
            return true;

        for (int i = s1.size(); i < s2.size(); i++) {

            hash2[s2[i-s1.size()]]--;

            if (hash2[s2[i-s1.size()]] == 0)
                hash2.erase(s2[i-s1.size()]);

            hash2[s2[i]]++;

            if (hash1 == hash2)
                return true;
        }
        return false;      
    }
};