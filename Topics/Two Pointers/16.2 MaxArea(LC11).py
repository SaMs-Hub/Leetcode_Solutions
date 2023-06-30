class Solution:
    def maxArea(self, arr: List[int]) -> int:
        maxArea = 0
        currentArea = 0
        
        left, right = 0, len(arr) - 1;
        
        while (left < right):
            currentArea = (right - left) * min(arr[left], arr[right])
            maxArea = max(maxArea, currentArea)
            
            if (arr[left] <= arr[right]):
                left += 1
            else:
                right -= 1
        
        
        return maxArea;
