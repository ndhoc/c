class Solution {
public:
    string sortVowels(string& s) {
        string t;
        for(int i=0; i<s.size(); ++i){
            if(s[i]=='E' || s[i]=='e' || s[i]=='U' || s[i]=='u' || s[i]=='O' || s[i]=='o' || s[i]=='A' || s[i]=='a' || s[i]=='I' || s[i]=='i'){
                t+=s[i];
            }
        }
        sort(t.begin(),t.end());
        int j=0;
        for(int i=0; i<s.size(); ++i){
            if(s[i]=='E' || s[i]=='e' || s[i]=='U' || s[i]=='u' || s[i]=='O' || s[i]=='o' || s[i]=='A' || s[i]=='a' || s[i]=='I' || s[i]=='i'){
                s[i] = t[j++];
            }
        }
        return s;
    }
};
