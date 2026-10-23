class Solution:
    def twoSum(self, numbers, target):

        start = 0
        end = len(numbers) - 1

        while start < end:

            total = numbers[start] + numbers[end]

            if total == target:
                return [start + 1, end + 1]

            elif total < target:
                start += 1
            else:
                end -= 1

        return [-1, -1]



        # binary search
        # n = len(numbers)
        # for i in range(n):
        #     l = i+1
        #     r = n -1
        #     res = target - numbers[i]
        #     while l <= r:
        #         mid = l + (r-l) // 2

        #         if numbers[mid] == res:
        #             return [i+1,mid+1]
        #         elif numbers[mid] < res:
        #             l = mid + 1
        #         else:
        #             r = mid - 1

