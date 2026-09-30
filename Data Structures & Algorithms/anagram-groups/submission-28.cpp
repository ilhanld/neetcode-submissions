class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> v; 
        vector<vector<string>> test;

        for (int i = 0; i < strs.size(); i++) {
            string save = strs[i];
            sort(save.begin(), save.end());
            v[save].push_back(strs[i]);
        }

        for (auto& p : v) {
            test.push_back(p.second);
        }

        return test;
    }
};
