class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        while(high >= low){
            int mid = low + (high - low)/2;
            if(mid*1ll*mid == x){
                return mid;
            }
            else if (mid*1ll*mid >= x){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return min(low, high);
    }
};