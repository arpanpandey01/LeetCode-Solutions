class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map <int, int> map;
        unordered_set <int> set;

        for (int i : arr) {
            map[i]++;
        }

        for (auto val : map) {
            if (set.count(val.second)) {
                return false;
            }

            set.insert(val.second);
        }

        return true;
    }
};