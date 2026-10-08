class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [1]*n
        preff = 1
        for i in range(n):
            ans[i] = preff
            preff *= nums[i]
        
        suff = 1
        for j in range(n-1, -1, -1):
            ans[j] *= suff
            suff *= nums[j] 
        
        return ans


