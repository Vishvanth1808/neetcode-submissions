class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> mpp;
        unordered_map<char, int> mpp2;
        for(int i =0;i < s.length(); i++){
            mpp[s[i]]++;
            mpp2[t[i]]++;
        }
        if(mpp==mpp2) return true;
        return false;
    }
};
