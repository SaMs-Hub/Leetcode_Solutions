class Solution:
    def isValid(self, s: str) -> bool:
        brackets_stack, lefts, rights = [], ("(", "[", "{"), (")", "]", "}")
        for x in s:
            if x in lefts:
                brackets_stack.append(x)
            elif not brackets_stack or lefts.index(brackets_stack.pop()) != rights.index(x):
                return False
        return not brackets_stack
