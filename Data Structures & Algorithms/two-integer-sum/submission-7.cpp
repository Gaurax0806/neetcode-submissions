class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mp;
        int diffrence = 0;
        for (int i = 0; i < nums.size(); i++) {
            diffrence = target - nums[i];
            if (mp.find(diffrence) != mp.end()) {
                return {mp[diffrence], i};
            }
            mp.insert({nums[i], i});
        }
        return {};
    }
};
