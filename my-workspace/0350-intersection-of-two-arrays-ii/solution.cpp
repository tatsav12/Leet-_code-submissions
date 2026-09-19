class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> a;
        int n = nums1.size();
        int k = nums2.size();
        for(int i = 0;i<n;i++){
            m[nums1[i]]++;
        }
        for(int i = 0;i<k;i++){
            if(m[nums2[i]]>0){
                a.push_back(nums2[i]);
                m[nums2[i]]--;
            }
        }
        return a;
    }
};
