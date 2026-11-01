class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector <int> output;
        unordered_map <char , int> hash1;
        int n = p.size();

        if (p.size() > s.size())
            return {};
        
        for (int i = 0; i < p.size(); i++) {
            hash1[p[i]]++;
        }

        unordered_map <char , int> hash2;

        for (int i = 0; i < p.size(); i++) {
            hash2[s[i]]++;
        }

        if (hash1 == hash2)
            output.push_back(0);

        for (int i = p.size(); i < s.size(); i++) {
            
            hash2[s[i - p.size()]]--;

            if (hash2[s[i - p.size()]] == 0)
                hash2.erase(s[i - p.size()]);

            hash2[s[i]]++;

            if (hash1 == hash2)
                output.push_back(i - p.size() + 1);  
        }
        return output;
    }
};