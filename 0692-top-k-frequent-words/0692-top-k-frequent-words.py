class Solution:
    def topKFrequent(self, words: list[str], k: int) -> list[str]:
        freq = {}
        for word in words:
            if word in freq:
                freq[word] += 1
            else:
                freq[word] = 1

        SbyK = sorted(freq.keys(), key = lambda x : (-freq[x],x))

        topk = SbyK[:k]

        return topk 
        