class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> a(2001,0);
        int n = arr.size();
        for(int i = 0;i<n;i++){
            a[arr[i]+1000]++;
        }
        sort(a.rbegin(),a.rend());
        for(int i = 0;i<2000;i++){
            if(a[i]==a[i+1] && a[i]!=0)return false;
            if(a[i]==0)return true;
        }
        return true;
    }
};
