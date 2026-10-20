class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        n = len(nums)
        for i in range(1,n):
            nums[i] += nums[i-1]
        
        return nums
        

            

        