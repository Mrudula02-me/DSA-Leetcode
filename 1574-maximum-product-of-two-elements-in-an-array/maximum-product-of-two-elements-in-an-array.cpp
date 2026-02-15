class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxVal = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {   // ensures i != j
                int ans = (nums[i] - 1) * (nums[j] - 1);
                if(ans > maxVal) {
                    maxVal = ans;
                }
            }
        }
        return maxVal;
    }
};
