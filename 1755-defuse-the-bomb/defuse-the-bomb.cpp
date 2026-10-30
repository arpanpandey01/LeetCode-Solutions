class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        int n = code.size();
        vector <int> result(n);

        if (k > 0) {
            
            int sum = 0;

            for (int i = 1; i <= k; i++) {
                sum += code[i];
            }

            result[0] = sum;

            for (int i = 1; i < n; i++) {
                sum = sum + code[(i+k)%n] - code[i];
                result[i] = sum;
            } 
        }
        else if (k < 0) {
            k = -k;

            int sum = 0;

            for (int i = n - k; i < n; i++)
                sum += code[i];

            result[0] = sum;

            for (int i = 1; i < n; i++) {
                sum = sum - code[(i - k - 1 + n) % n]
                    + code[(i - 1 + n) % n];

                result[i] = sum;
            }
        }
        return result;
    }
};  