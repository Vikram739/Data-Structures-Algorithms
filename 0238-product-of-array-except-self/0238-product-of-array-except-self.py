class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        left = [1]*n
        right = [1]*n

        for i in range(1,n):
            left[i] = nums[i-1]*left[i-1]

        for j in range(n-2,-1,-1):
            right[j] = nums[j+1]*right[j+1]

        ans = [1]*n
        for i in range(n):
            ans[i] = left[i]*right[i]
        
        return ans

