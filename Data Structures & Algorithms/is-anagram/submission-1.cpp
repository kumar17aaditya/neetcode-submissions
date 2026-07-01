class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int check[26]={0};
        for(char c:s){
            check[c-'a']++;
        }
        for(char c:t){
            check[c-'a']--;
        }
        for(int i=0;i<26;i++){
            if(check[i]!=0)
                return false;
        }

        return true;
    }
};
