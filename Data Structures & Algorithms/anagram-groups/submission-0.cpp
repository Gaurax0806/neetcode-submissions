class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<int>> freq(n, vector<int>(26, 0));

        // build frequency for each string
        for (int i = 0; i < n; i++) {
            for (char c : strs[i]) {
                freq[i][c - 'a']++;
            }
        }

        vector<bool> visited(n, false);
        vector<vector<string>> result;

        for (int i = 0; i < n; i++) {
            if (visited[i]) continue;

            vector<string> group;
            group.push_back(strs[i]);
            visited[i] = true;

            for (int j = i + 1; j < n; j++) {
                if (!visited[j] && freq[i] == freq[j]) {
                    group.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            result.push_back(group);
        }

        return result;
    }
};