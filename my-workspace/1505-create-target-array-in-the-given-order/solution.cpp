class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> a(n,-1);
        for(int i = 0;i<n;i++){
            if(a[index[i]]!=-1){
                for(int j = i;j>index[i];j--){
                    a[j] = a[j-1];
                }
            }
                a[index[i]] = nums[i];
        }
        return a;
    }
};
