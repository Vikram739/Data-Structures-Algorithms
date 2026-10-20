class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        n = len(nums)
        ans = []
        for i in range(n):
            j = 0
            sum = 0
            while j <= i:
                sum += nums[j]
                j += 1
            ans.append(sum)


        return ans
            

        