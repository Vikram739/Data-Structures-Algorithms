class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        n = len(nums)
        ans = []
        Preffsum = 0
        for i in range(n):
            Preffsum += nums[i]
            ans.append(Preffsum)
        
        return ans
        

            

        