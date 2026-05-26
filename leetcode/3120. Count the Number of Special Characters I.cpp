class Solution {
public:
    int numberOfSpecialChars(string word) {
        int cnt=0;
        for(char c='a'; c<='z'; ++c){
            if(word.find(c) != string::npos && word.find(c-32) != string::npos){
                ++cnt;
            }
        }
        return cnt;
    }
};