class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> prefix_mul(n);
        vector <int> suffix_mul(n);
        prefix_mul[0] = nums[0];
        for(int i = 1; i < n; i++){
            prefix_mul[i] = nums[i] * prefix_mul[i-1];
        }
        suffix_mul[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            suffix_mul[i] = nums[i] * suffix_mul[i+1];
        }
        for(int i = 0; i < n; i++){
            int pref = 1;
            int suffix = 1;
            if(i-1 >= 0){
                pref = prefix_mul[i-1];
            }
            if(i+1 < n){
                suffix = suffix_mul[i+1];
            }
            nums[i] = pref*suffix;
        }
        return nums;
    }
};
