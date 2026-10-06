class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        if len(strs) <= 1:
            return [strs]
        
        groups = {}
        for s in strs:
            key = "".join(sorted(s))

            if key in groups:
                groups[key].append(s)
            else:
                groups[key] = [s]
                # groups[key].append(s)
            
        return list(groups.values())
        