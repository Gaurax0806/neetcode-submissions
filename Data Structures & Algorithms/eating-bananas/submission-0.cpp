class Solution {
public:
    bool can_eat(vector<int>& piles, int k, int &h){
        int hours = 0;
        for(int i = 0; i < piles.size(); i++){
            hours += (piles[i] + k -1)/k;
        }
        if(hours <= h){
            return true;
        }
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int res = high;
        while(high >= low){
            int mid = low + (high - low) / 2;
            if(can_eat(piles, mid, h) == 1){
                res = min(res,mid);
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return res;
    }
};
