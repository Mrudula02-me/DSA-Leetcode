class Solution {
public:
int posf(vector<int>&nums, int target)
{
    int start=0, end= nums.size()-1, ans= -1;
    while(start<=end)
    {
        int mid= (start+end)/2;
        if(nums[mid]>=target) 
        {
            end= mid-1;
        }
        else
        {
            start = mid+1;
        }
        if(nums[mid] == target) ans = mid;
    } 
    return ans;
}

int posl(vector<int>& nums, int target)
{
    int start=0, end= nums.size()-1, ans= -1;
    while(start<=end)
    {
        int mid= (start+end)/2;
        if(nums[mid]<=target)
        {
            start = mid+1;

        }
        else
        {
            end= mid-1;
        }
        if(nums[mid] == target) ans = mid;
        
    }
    return ans;
}

 vector<int> searchRange(vector<int>& nums, int target)
  {

        return {posf(nums,target), posl(nums,target)};
    }
};