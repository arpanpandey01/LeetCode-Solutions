class Solution {
public:
    int reverseBits(int n) {
        int rbits = 0;

        for (int i = 0; i < 32; i++) {
            rbits = (rbits << 1) | (n & 1);
            n = n >> 1;
        }

        return rbits;
    }
};