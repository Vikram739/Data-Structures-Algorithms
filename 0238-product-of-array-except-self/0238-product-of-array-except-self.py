class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [0]*n

        pref = 1
        for i in range(n):
            ans[i] = pref
            pref *= nums[i]

        suff = 1
        for i in range(n-1, -1, -1):
            ans[i] *= suff
            suff *= nums[i]
        

        return ans