class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char, int>m;
        for(auto x:s){
            m[x]++;
        }
        for(auto a:t){
            m[a]--;
            if(m[a]<0) return false;
        } 
        return true;
    }
};