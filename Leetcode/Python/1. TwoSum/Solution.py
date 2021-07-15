#using Python
class Solution:
	def twoSum(self, nums, target):
		mapping = {}

		for index, val in enumerate(nums):
			diff = target - val
			if diff in mapping:
				return [index, mapping[diff]]
			else:
				mapping[val] = index

				
#using Python 3
class Solution:
    def twoSum(self, nums: [int], target: int):
        nums_hash = {}
        for i in range(len(nums)):
            if target - nums[i] in nums_hash:
                return [nums_hash[target - nums[i]],i]
            nums_hash[nums[i]]= i
