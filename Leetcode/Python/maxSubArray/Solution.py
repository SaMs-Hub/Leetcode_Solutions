class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        sm = 0
        mn = 0
        mx = -float('inf')
        for num in nums:
            sm += num
            mx = max(mx, sm - mn)
            mn = min(sm, mn)
        return mx
