class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string result = "";
        
        if (n == 0) {
            return result;
        }

        int minLen = INT_MAX;
        for (const string& s : strs) {
            minLen = min(minLen, static_cast<int>(s.length()));
        }

        for (int i = 0; i < minLen; i++) {
            char c = strs[0][i];
            
            for (int j = 1; j < n; j++) {
                if (strs[j][i] != c) {
                    return result;
                }
            }
            result += c;
        }

        return result;
    }
};
