class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1) return strs[0];
        string initial_s;
        int pointer_1 = 0; 
        int pointer_2 = 0;
        string result = "";
        for(int i = 0; i < strs[0].size() && i < strs[1].size(); i++){
            if(strs[0][i] == strs[1][i]){
                result.push_back(strs[0][i]);
            }
            else{
                break;
            }
        }
        for(int i = 2; i < strs.size(); i++){
            string temp_result = "";
            for (int j = 0; (j < strs[i].size() && j < result.size()); j++){
                if(strs[i][j] == result[j]){
                    temp_result.push_back(strs[i][j]);
                }
                else{
                    break;
                }
            }
            result = temp_result;
        }
        return result;
    }
};