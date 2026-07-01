class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int>mpp;
        for(int x:nums) mpp[x]++;
        for(auto it=mpp.begin();it!=mpp.end();it++){
            if(it->second>1) return true;
        }
        return false;
    }
};