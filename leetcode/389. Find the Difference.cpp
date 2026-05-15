class Solution {
public:
    char findTheDifference(string s, string t) {
        int ss=0, st=0;
        for(int i=0; i<s.size(); ++i){
            ss+=(int)(s[i]);
            st+=(int)(t[i]);
        }
        st+=t[t.size()-1];
        return (char)(st-ss);
    }
};