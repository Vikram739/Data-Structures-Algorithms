class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        # using bucket sort...






        freq = {}
        for num in nums:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
        
        sortedRes = sorted(freq.keys(), key = lambda x : freq[x], reverse=True)
        topK = sortedRes[:k]

        return topK
