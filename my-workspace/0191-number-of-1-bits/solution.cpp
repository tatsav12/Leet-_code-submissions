class Solution {
public:
    int hammingWeight(int n) {
        int ans;
        while(n>0){
            ans+=n%2;
            n = n/2;
        }
        return ans;
    }
};
