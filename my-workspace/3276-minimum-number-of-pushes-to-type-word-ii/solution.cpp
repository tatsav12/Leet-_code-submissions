class Solution {
public:
    int minimumPushes(string word) {
        map<char,int> m;
        int n = word.size();
        for(int i = 0;i<n;i++){
            m[word[i]]++;
        }
        vector<pair<char,int>> vec(m.begin(),m.end());
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
        return a.second > b.second;
    });

    int ans = 0;
        int k = 1;
    for(int i = 0;i<vec.size();i+=8){
        for(int j = i+0;j<i+8 && j<vec.size();j++){
          ans+=vec[j].second*k;  
        }
        k++;
    }
    return ans;
    }
};
