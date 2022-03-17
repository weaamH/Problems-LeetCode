def twoSum(nums, target):
    list = []
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                list.append(i)
                list.append(j)
                break
    return list