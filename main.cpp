class Solution {
public:
    vector<int> grayCode(int n) {
        int range = pow(2,n);
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(1);
        int latest;
        int count = 0;
        for(int i = 2; i < range; i++){
            if((i&(i-1)) == 0){
                latest = i;
                count = 1;
            }
            ans.push_back(ans[latest-count] | latest);
            count++;
        }
        return ans;
    }
};
