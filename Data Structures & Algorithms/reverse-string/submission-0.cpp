class Solution {
public:
    void reverseString(vector<char>& s) {
       int left = 0;
       int right = s.size()-1;
       while (left < right){
        if (s[left]==s[right]){
            left ++; 
            right --;
        }
        else{
            char tempo;
            tempo = s[right];
            s[right] = s[left];
            s[left] = tempo;
            left ++;
            right--;
        }
       }

    }
};