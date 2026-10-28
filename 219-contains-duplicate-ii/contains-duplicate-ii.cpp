class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_set <int> store;

        for (int i = 0; i< nums.size(); i++) {

            if (store.count(nums[i]))
                return true;

            store.insert(nums[i]);

            if (store.size() > k)
                store.erase(nums[i-k]) ;   
        }
        return false;
    }
};