class Solution {
public:
    int concatenatedBinary(int n) {
        long long mod = 1e9+7;
        int ans = 0;
        long long x=1;
        for(int i = n;i>=1;i--){
            int k = i;
            while(k>0){
                ans=(ans + (k%2)*(x%mod))%mod;;
                k = k/2;
                x = (x*2)%mod;
            }
        }
        return ans;
    }
};
