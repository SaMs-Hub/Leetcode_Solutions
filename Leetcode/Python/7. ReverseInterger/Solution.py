class Solution:
    def reverse(self, x:int):
        if x >= 0:
            x =  int(str(x)[::-1])
        else:
            x = int('-' + str(x)[::-1][:-1])
        while -2 ** 31 <= x <= 2 ** 31 - 1:
            return x
        return 0
        
