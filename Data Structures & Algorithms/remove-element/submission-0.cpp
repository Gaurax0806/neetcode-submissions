class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        unordered_map <int,int> m;
        for(auto it : nums){
            m[it]++;
        }
        m.erase(val);
        int z = 0;
        for(auto it : m){ 
            for(int j = 0; j < it.second; j++){
                nums[z] = it.first;
                z++;
            }
        }
        return z;
    }
};