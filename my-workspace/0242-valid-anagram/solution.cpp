class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(t.size()!=s.size())return false;

        for(int i = 0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i = 0;i<t.size();i++){
            mp[t[i]]--;
            if(mp[t[i]]<0)return false;
        }
        // for(char ch = 'a';ch<='z';ch++){
        //     if(mp[ch]!=0)return false;
        // }
        return true;
    }
};
