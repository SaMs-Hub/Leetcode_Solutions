class Solution:
    def romanToInt(self, s: str):
        table = {"M": 1000, "D": 500, "C": 100, "L": 50, "X": 10, "V": 5, "I": 1}
        sm = 0
        pre= "I"
        for x in s[::-1]:
            if table[x] < table[pre]:
                sm = sm - table[x]
                pre = x
            else:
                sm = sm + table[x]
                pre = x
        return sm
