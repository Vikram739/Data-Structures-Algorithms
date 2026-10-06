class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:

        # groups = defaultdict(list)
        # for s in strs:
        #     key = "".join(sorted(s))
        #     groups[key].append(s)
            
        # return list(groups.values())

        groups = defaultdict(list)

        for s in strs:
            count = [0]*26
            for c in s:
                count[ord(c) - ord('a')] += 1
            
            groups[tuple(count)].append(s)
            
        return list(groups.values())
        