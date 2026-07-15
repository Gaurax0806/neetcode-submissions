class Solution {
public:
    bool is_possible(vector<int>& weights, int days, int capacity){
        int daily_cap = 0;
        int i = 0;
        while(days--){
            while(true){
                if(i == weights.size()){
                    return true;
                }
                if(daily_cap + weights[i] <= capacity){
                    daily_cap += weights[i];
                    i++;
                }
                else{
                    break;
                }
            }
            daily_cap = 0;
        }
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        for(auto it : weights){
            sum += it;
        }
        int low = *max_element(weights.begin(), weights.end());
        int high = sum;
        int res = sum;
        while (high >= low){
            int mid = low + (high - low)/2;
            if(is_possible(weights, days, mid) == 1){
                high = mid-1;
                res = min(res, mid);
            }
            else{
                low = mid + 1;
            }
        }
        return res;
    }
};