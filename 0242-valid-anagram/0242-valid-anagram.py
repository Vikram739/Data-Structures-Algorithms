class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
            
        map = {}
        for st in s:
            if st in map:
                map[st] += 1
            else:
                map[st] = 1
        
        for ts in t:
            if ts in map and map[ts] > 0:
                map[ts] -= 1

            else:
                return False
        return True


        