class Solution:
    def replaceElements(self, arr: list[int]) -> list[int]:

        n = len(arr)
        curr_leader = arr[n-1]
        arr[n-1] = -1

        for i in range(n-2,-1,-1):
            if arr[i]> curr_leader:
                temp = arr[i]
                arr[i] = curr_leader
                curr_leader = temp
            else:
                arr[i] = curr_leader
        return arr        