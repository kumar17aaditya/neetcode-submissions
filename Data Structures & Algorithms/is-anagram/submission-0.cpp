class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int check1[26]={0};
        int check2[26]={0};
        for(char c:s){
            check1[c-'a']++;
        }
        for(char c:t){
            check2[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(check1[i]!=check2[i])
                return false;
        }

        return true;
    }
};
