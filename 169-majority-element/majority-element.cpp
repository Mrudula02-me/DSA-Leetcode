class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int f =1;
        int ans = nums[0];
        for(int i = 1; i<n; i++ )
        {
            if(nums[i]==nums[i-1])
            {
                f++ ;
                
            }
            else
            {
                f = 1;
            }
            if(f > n/2)
            {
                ans = nums[i];
                return ans;
            }
        }
        return ans ;
        
    }
};