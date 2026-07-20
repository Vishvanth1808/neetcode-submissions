class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(const string& s : strs){
            encoded.append(to_string(s.size()));
            encoded.push_back('#');
            encoded += s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;
        while(i<s.size()){
            int delimiter = i;
            while(s[delimiter] != '#'){
                delimiter++;
            }
            int length = stoi(s.substr(i , delimiter-i));
            i = delimiter+1;
            delimiter = i + length;
            decoded.push_back(s.substr(i, length));
            i += length;
        }
        return decoded;
    }
};
