class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp ;
        mp[0]=1;
        int n = nums.size(); 
        int count= 0;
        int sum = 0;
        int i = 0;
        while(i<n)
        {
            sum += nums[i];
            if(mp.find(sum - k) != mp.end() )
            {
                count += mp[sum - k];
            }
            mp[sum]++;
            i++ ;

        }
        return count ;
    }
};