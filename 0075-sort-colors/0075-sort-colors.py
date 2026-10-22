class Solution:
    def sortColors(self, nums: list[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.

        """

        count = [0, 0, 0]
        for num in nums:
            count[num] += 1

        i = 0
        for color in range(3):
            for _ in range(count[color]):
                nums[i] = color
                i+= 1

        # left =  mid = 0
        # right = len(nums)-1

        # while mid <= right:
        #     if nums[mid] == 0:
        #         nums[left], nums[mid] = nums[mid], nums[left]
        #         left += 1
        #         mid += 1
        #     elif nums[mid] == 2:
        #         nums[right],nums[mid] = nums[mid] , nums[right]
        #         right -= 1
        #     else:
        #         mid += 1
        

        
            

        