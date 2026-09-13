class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorval = x^y;
        int count = 0;
        while(xorval>0){
            count+=(xorval&1);
            xorval >>= 1;
        }
        return count;
    }
};
