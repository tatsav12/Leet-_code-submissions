class Solution {
public:
    int findComplement(int num) {
        // Find the highest bit position
        int mask = num;
        mask |= (mask >> 1);
        mask |= (mask >> 2);
        mask |= (mask >> 4);
        mask |= (mask >> 8);
        mask |= (mask >> 16);
        // Now mask is all 1s up to the highest bit of num
        return num ^ mask;
    }
};

