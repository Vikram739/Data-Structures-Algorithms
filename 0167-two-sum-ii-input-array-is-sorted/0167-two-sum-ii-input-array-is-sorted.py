class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        n = len(nums)
        l = 0
        r = n-1
        while l < r:
            
            currSum = nums[l] + nums[r]

            if currSum > target:
                r -= 1
            elif currSum < target:
                l += 1
            else:
                return [l+1, r+1]

            
        