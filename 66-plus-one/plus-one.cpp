class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k = digits.size() - 1;

        while (k >= 0) {
            if (digits[k] < 9) {
                digits[k]++;
                return digits;
            }

            digits[k] = 0;
            k--;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};