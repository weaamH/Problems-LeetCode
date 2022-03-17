def maxSubArray(nums):
    maxSub=nums[0]
    sum=0
    for element in nums:
        if sum<0: sum=0
        sum+=element
        maxSub=max(maxSub, sum)
    return maxSub
