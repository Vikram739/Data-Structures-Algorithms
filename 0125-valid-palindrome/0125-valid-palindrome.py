class Solution:
    def isPalindrome(self, s: str) -> bool:
        l , r = 0, len(s)-1

        while l < r:
            if l < r and not s[l].isalnum():
                l += 1
            elif l < r and not s[r].isalnum():
                r -= 1
            else:
                if s[l].lower() != s[r].lower():
                    return False
                l+= 1
                r -= 1

        return True

        