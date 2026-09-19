class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        set<int> s;
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0;i<n;i++){
            s.insert(nums1[i]);
        }
        for(int i = 0;i<m;i++){
            if(s.find(nums2[i])!=s.end()){
                a.push_back(nums2[i]);
                s.erase(nums2[i]);
            }
        }
        return a;
    }
};
