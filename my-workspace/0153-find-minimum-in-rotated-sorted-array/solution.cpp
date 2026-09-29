class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0;
        int end = nums.size()-1;
        int n = nums.size();
         if(n==1)return nums[0];
        // if(n==2)return (nums[0]<nums[1]) ? nums[0] : nums[1];

        while(st<end){
            int mid = st+(end-st)/2;
           
            if(nums[mid]>nums[end]){
                st = mid+1;
            }else{
                end = mid;
            }
        }
        return nums[st];
    }
};
