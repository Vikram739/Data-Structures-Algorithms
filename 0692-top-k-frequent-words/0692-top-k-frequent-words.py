class Solution:
    def topKFrequent(self, words: list[str], k: int) -> list[str]:
        
        freq = {}
        for word in words:
            freq[word] = freq.get(word,0) + 1
        
        heap = []
        for key in freq.keys():
            heap.append((-freq[key], key))
        
        heapq.heapify(heap)

        topk = []
        for i in range(k):
            count , word = heapq.heappop(heap)
            topk.append(word)
        return topk
        
        # using sorting....
        # freq = {}
        # for word in words:
        #     if word in freq:
        #         freq[word] += 1
        #     else:
        #         freq[word] = 1

        # SbyK = sorted(freq.keys(), key = lambda x : (-freq[x],x))

        # topk = SbyK[:k]

        # return topk 
        