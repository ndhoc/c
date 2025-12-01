class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26],vow=0,con=0;
        for(char c:s) freq[c-'a']++;
        for(char c='a'; c<='z'; c++){
            if(c=='e'||c=='u'||c=='o'||c=='a'||c=='i'){
                vow=max(vow,freq[c-'a']);
            }
            else con=max(con,freq[c-'a']);
        }
        return vow+con;
    }
};
