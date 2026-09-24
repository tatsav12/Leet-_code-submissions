class Solution {
public:
    int mySqrt(int x) {
        if(x==1||x==0)return x;
        int st = 1;
        int end = x;
        int result = 0;
        while(st <= end){
            int mid = st+(end-st)/2;
            if(mid==x/mid)return mid;
            if(mid < x/mid){
                st = mid+1;
                result = mid;
            }else{
                end = mid-1;
            }
        }
        return result;
    }
};
