class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> m;
        for(auto it : nums){
            m[it]++;
        }
        vector<pair<int, int>> map_vector;
        for(auto it : m){
            map_vector.push_back({it.second, it.first});
        }
        sort(map_vector.begin(), map_vector.end());
        vector <int> result;
        if(map_vector.size() == 1){
            return {map_vector[0].second};
        }
        for(int i = map_vector.size()-1; i > (int)map_vector.size()-1-k; i--){
            result.push_back(map_vector[i].second);
        }
        return result;
    }
};
