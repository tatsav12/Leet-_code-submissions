class Solution {
    private:
    bool prime(int n){
        if(n<=1)return false;
        for(int i = 2;i*i<=n;i++){
            if(n%i==0)return false;
        }
        return true;
    }
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i = left;i<=right;i++){
            int k = i;
            int one = 0;
            while(k>0){
                if(k%2==1)one++;
                k/=2;
            }
            if(prime(one))ans++;
        }
        return ans;
    }
};
