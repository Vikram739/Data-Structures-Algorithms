class Solution:
    def maxProductDifference(self, nums: List[int]) -> int:
        nums = sorted(nums)

        return abs(((nums[0]*nums[1]) - (nums[-1]*nums[-2])))