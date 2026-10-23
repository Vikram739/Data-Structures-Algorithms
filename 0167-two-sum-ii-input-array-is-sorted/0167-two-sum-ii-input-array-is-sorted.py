class Solution:
    def twoSum(self, numbers, target):

        # start = 0
        # end = len(numbers) - 1

        # while start < end:

        #     total = numbers[start] + numbers[end]

        #     if total == target:
        #         return [start + 1, end + 1]

        #     elif total < target:
        #         start += 1
        #     else:
        #         end -= 1

        # return [-1, -1]



        # binary search
        n = len(numbers)

        for i in range(n):
            need = target - numbers[i]
            left = i + 1
            right = n - 1

            while left <= right:
                mid = (left + right) // 2
                if numbers[mid] == need:
                    return [i + 1, mid + 1]
                elif numbers[mid] < need:
                    left = mid + 1
                else:
                    right = mid - 1

        return []

