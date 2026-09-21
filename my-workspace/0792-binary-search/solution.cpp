class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1;
        int st = 0;
        int end = nums.size()-1;
        while(st<=end){
            int mid = st + (end - st)/2;
            if(nums[mid]==target){
                ans = mid;
                return ans;
            }else if(nums[mid]>target){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
    }
};
