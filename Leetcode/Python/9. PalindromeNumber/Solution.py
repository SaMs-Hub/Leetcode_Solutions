class Solution:
    def isPalindrome(self, x: int) -> bool:
        if str(int(x)) == str(int(x))[::-1]:
            return True
        else:
            return False
