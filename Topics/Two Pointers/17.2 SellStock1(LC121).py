// O(N)
def maxProfit(self, arr: List[int]) -> int:
      left = 0
      right = 1
      maxProfitValue = 0
      
      while (right < len(arr)):
          if (arr[left] < arr[right]):
              maxProfitValue = max(maxProfitValue, arr[right] - arr[left])
          else:
              left = right        
          right += 1
          
      return maxProfitValue
