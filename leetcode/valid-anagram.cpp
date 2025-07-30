class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> mp1,mp2;
        for(int i=0; i<s.length(); ++i) mp1[s[i]]++;
        for(int i=0; i<t.length(); ++i) mp2[t[i]]++;
        return mp1==mp2;
    }
};
