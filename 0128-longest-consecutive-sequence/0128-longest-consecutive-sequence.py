class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:

        if len(nums) == 0: 
            return 0

        MaxLen = 1
        nums.sort()
        currentLen = 1
        i = 0
        while i < len(nums)-1:
            
            if nums[i+1] == nums[i]+1:
                currentLen += 1
                MaxLen = max(MaxLen, currentLen)
            elif nums[i+1] != nums[i]:
                currentLen = 1
            i += 1
        
        return MaxLen



        