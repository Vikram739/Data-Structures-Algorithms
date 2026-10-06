class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        dict = {}
        for num in nums:
            if num in dict:
                dict[num] += 1
            else:
                dict[num] = 1
        
        sorted_pairs = sorted(dict.keys(), key=lambda num: dict[num], reverse=True)

        top_k = sorted_pairs[:k]
        return top_k