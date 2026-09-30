class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      vector <int> output;
      unordered_map <int, int> v; 

      for (int i = 0; i < nums.size(); i++) {
        v[nums[i]]++;
      }
      vector<pair<int, int>> value; 
      for (auto &y : v) {
        value.push_back({y.second, y.first});
      }

      sort(value.begin(), value.end(), greater<>());

      for (int o = 0; o < k; o++) {
        output.push_back(value[o].second);
      }

      return output;  
    }
};
