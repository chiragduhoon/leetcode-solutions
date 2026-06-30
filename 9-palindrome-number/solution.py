import math
class Solution:
    def isPalindrome(self, x: int) -> bool:
        if(x>=0):
            rev=int(str(x)[::-1])
            return x==rev
        else:
            return False