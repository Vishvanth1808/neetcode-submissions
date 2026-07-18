class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        for(int i = 0; i<strs.size(); i++){
            string s = strs[i];
            vector<int> count(26,0);
            for(int j = 0; j<s.size(); j++){
                count[s[j] - 'a']++;
            }
            string key = "";
            for(int j = 0; j<26; j++){
                key += to_string(count[j]);
                key += "#";
            }
            mpp[key].push_back(s);
            
        }
        vector<vector<string>> res;
        for(auto it:mpp){
            res.push_back(it.second);
        }
        return res;
    }
};
