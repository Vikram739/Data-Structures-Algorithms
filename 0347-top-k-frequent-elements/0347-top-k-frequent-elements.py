class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        # using bucket sort...
        freq = {}
        for num in nums:
            freq[num] = freq.get(num, 0) + 1
        
        buckets = [[] for _ in range(len(nums)+1)]

        for num in freq:
            buckets[freq[num]].append(num)
        
        topk = []
        for count in range(len(buckets)-1 , 0 , -1):
            for num in buckets[count]:
                topk.append(num)
                if len(topk) >= k:
                    return topk

        return topk
        

        # using heap...... 
        # freq = {}
        # for num in nums:
        #     if num in freq:
        #         freq[num] += 1
        #     else:
        #         freq[num] = 1

        # heap = []
        # for key in freq.keys():
        #     heapq.heappush(heap, (freq[key], key))

        #     if len(heap) > k:
        #         heapq.heappop(heap)
            

        # topk = [num for count, num in heap]

        return topk
