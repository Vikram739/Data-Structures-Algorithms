class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:

        # return len(set(nums)) != len(nums)
        seen = set()

        for num in nums:
            if num in seen:
                return True
            seen.add(num)
        return False

