class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ma = 0;
        int to = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]==1){
                to++;
                ma = max(to,ma);
            }else{
                to = 0;
            }
        }
        return ma;
    }
};
