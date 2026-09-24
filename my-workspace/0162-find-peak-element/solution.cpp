class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st = 0;
        int end = nums.size()-1;

        while(st<=end){
            int mid = st+(end-st)/2;

            if(mid+1==nums.size() && mid-1==-1)return 0; 

            if(mid==nums.size()-1&&nums[mid]>nums[mid-1])return mid;
            if(mid==0 && nums[mid]>nums[mid+1])return mid;

            if(mid-1>=0 && mid+1<nums.size() && nums[mid]>nums[mid-1] && nums[mid] > nums[mid+1]){
                return mid;
            }else if(mid+1 < nums.size() && nums[mid+1]>nums[mid]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return -1;
    }
};
