class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size()-1;
        int ans = -1;
        while(st<=end){
            int mid = st + (end-st)/2;
            ans = mid;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        if(nums[ans]>target)ans = ans;
        else ans = ans+1;

        return ans;
    }
};
