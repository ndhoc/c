class Solution {
public:
    bool compare(string ch,string bL){
        vector<int> freq(26,0);
        for(auto i: bL)freq[i-'a']++;
        for(auto i:ch){
            if(freq[i-'a'])return 0;
        }
        return 1;
    }
    int canBeTypedWords(string text, string bL) {
        int ans =0;
        string ch;
        stringstream s(text);
        while(getline(s,ch,' ')){
            bool temp = compare(ch,bL);
            if(temp)ans++;
        }
        return ans;
    }
};
