class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        int i = 0;
        int j = n-1;
        
        while(i<j)
        {
            int ps = nums[i] + nums[j];
            if(ps > target)
            {
                j--;
           }
           else if(ps < target)
           {
            i++;
           }
           else
           {
            return {i+1,j+1};

           }
        }
        return {} ;
        
    }
};