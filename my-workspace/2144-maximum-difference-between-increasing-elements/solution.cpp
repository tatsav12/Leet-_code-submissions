class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        int bestbuy = nums[0];
        for(int i = 1;i<n;i++){
            if(nums[i]>bestbuy){
                ans = max(ans,nums[i]-bestbuy);
            }else{
                bestbuy = nums[i];
            }
        }
        return ans;
    }
};
