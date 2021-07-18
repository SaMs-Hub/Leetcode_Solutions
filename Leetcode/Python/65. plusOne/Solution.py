class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        d = 0
        l = len(digits)
        for digit in digits:
            d = d * 10 + digit
        d+=1
        digits.clear()
        while d:
            number = d % 10
            digits.insert(0,number)
            d//=10
        while len(digits) < l:
            digits.insert(0,0)
        return digits  
