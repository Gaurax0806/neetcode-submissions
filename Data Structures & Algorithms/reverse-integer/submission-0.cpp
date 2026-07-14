class Solution {
public:
    int reverse(int x) {
        vector<int> v;
        int rev=0;
        while (x!=0){
            v.push_back(x%10);
            x=x/10;
        }
        for (int i=0; i<v.size(); i++){
            if (rev > INT_MAX/10 || (rev == INT_MAX/10 && v[0]>7)){
                return 0;
            }
                
            if (rev < INT_MIN/10 || (rev == INT_MIN/10 && v[0]<-8)){
                return 0;
            }
            rev=rev*10+v[i];
        }
        return rev;
    }
};