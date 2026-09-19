class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> m;
        int ans = -1;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto a: m){
            if(a.first==a.second)ans = max(ans,a.first);
        }
        return ans;
    }
};
