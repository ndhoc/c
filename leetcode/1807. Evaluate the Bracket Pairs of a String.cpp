class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string, string> mp;

        for(int i=0; i<knowledge.size(); ++i) {
            mp[knowledge[i][0]] = knowledge[i][1];
        }

        string ans = "";

        for(int i=0; i<s.length(); ++i) {
            string word = "";

            if(s[i] == '(') {
            
                for(int j=i+1; j<s.length(); ++j) {

                    if(s[j] == ')') {
                        i = j;
                        break;
                    }
                    word += s[j];
                }

                if(mp.count(word)) {
                    ans += mp[word];
                }
                else ans += '?';
                
            }

            else ans += s[i];
        }

        return ans;
    }
};