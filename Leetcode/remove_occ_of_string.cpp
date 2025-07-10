class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t pos = s.find(part);  // find returns index or npos

        while (pos != string::npos) {
            s = s.substr(0, pos) + s.substr(pos + part.length());
            pos = s.find(part);  // check for next occurrence
        }

        return s;
    }
};
