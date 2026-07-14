class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set <int> s;
        for (auto it : nums){
            s.insert(it);
        } 
        int maxx = 0;
        int f_max = 0;
        int prev = *(s.begin());
        prev--;
        for(auto it : s){
            if(it == prev + 1){
                prev = it;
                maxx ++;
            }
            else{
                f_max = max(f_max, maxx);
                prev = it;
                maxx = 1;
            }
        }
        f_max = max(f_max, maxx);
        return f_max;
    }
};
