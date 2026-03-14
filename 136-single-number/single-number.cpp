class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xx = 0;
        int i =0;
        while(i<n)
        {
            xx = xx ^ nums[i];
            i++;
        }
        return xx ;
    }
};