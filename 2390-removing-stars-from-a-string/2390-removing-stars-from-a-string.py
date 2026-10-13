class Solution:
    def removeStars(self, s: str) -> str:
        # stack = []

        i = 0
        j = 0
        s = list(s)
        while i < len(s):
            if s[i] != '*' and i == j:
                j += 1
            elif s[i] != '*' and i != j:
                s[j] = s[i]
                j += 1
            else:
                j -= 1
            
            i += 1

        return ''.join(s[:j]) 
            
        

        