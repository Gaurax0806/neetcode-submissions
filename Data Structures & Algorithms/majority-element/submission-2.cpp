class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> m;
        for(auto it : nums){
            m[it]++;;
        }
        int max_freq = 0;
        int result;
        for(auto it : m){
            if(it.second > max_freq){
                max_freq = max(max_freq, it.second);
                result = it.first;
            }
        }
        return result;
    }
};