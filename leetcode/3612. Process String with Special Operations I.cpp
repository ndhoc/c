class Solution {
public:
    string processStr(string s) {
        string res = "";
        for(char c:s) {
            if(islower(c)) res+=c;
            if(c == '#') res += res;
            if(c == '%') reverse(res.begin(), res.end());
            if(c == '*') res = res.substr(0, res.size()-1);
        }
        return res;
    }
};