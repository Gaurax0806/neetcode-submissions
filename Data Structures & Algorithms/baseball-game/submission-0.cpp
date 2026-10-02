class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> stck;

        for(int i = 0; i < operations.size(); i++) {

            if(operations[i] == "+") {

                int temp1 = stck.top();
                stck.pop();

                int temp2 = stck.top();
                stck.pop();

                stck.push(temp2);
                stck.push(temp1);
                stck.push(temp1 + temp2);
            }

            else if(operations[i] == "C") {
                stck.pop();
            }

            else if(operations[i] == "D") {
                int z = stck.top() * 2;
                stck.push(z);
            }

            else {
                stck.push(stoi(operations[i]));
            }
        }

        int ans = 0;

        while(!stck.empty()) {
            ans += stck.top();
            stck.pop();
        }

        return ans;
    }
};