class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        
        store = set(nums)
        maxL = 0
        
        for num in store:
            if (num-1) not in store:
                currL = 1
                while (num+currL) in store:
                    currL+=1

                maxL = max(maxL, currL)
        return maxL





        