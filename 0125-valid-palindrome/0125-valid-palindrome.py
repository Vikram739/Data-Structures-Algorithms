class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        s1 = re.sub(r'[^a-zA-Z0-9]','',s).lower()

        l,r = 0, len(s1)-1

        while l < r:
            if s1[l] != s1[r]:
                return False
            l+=1
            r-=1
        
        return True


        