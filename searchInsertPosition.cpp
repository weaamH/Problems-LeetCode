class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1, middle;
        while(left<=right)
        {
            middle=left+(right-left)/2;
            if(nums[middle]==target)
                return middle;
            if(target>nums[middle])
                left=middle+1;
            else if(target<nums[middle])
                right=middle-1;
        }
        return left;
    }
};