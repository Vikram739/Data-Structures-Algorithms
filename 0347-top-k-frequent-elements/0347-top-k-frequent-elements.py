class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        freq = {}
        for num in nums:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1
        
        heap = []
        for key in freq.keys():
            heapq.heappush(heap, (freq[key],key))

            if len(heap) > k:
                heapq.heappop(heap)
        
        top_k = [num for count, num in heap]
        return top_k