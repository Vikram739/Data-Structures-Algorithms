class Solution:
    def removeDuplicateLetters(self, s: str) -> str:
        dict = {char: indx for indx,char in enumerate(s)}
        res = []

        for indx, char in enumerate(s):
            if char not in res:
                while res and indx < dict[res[-1]] and char < res[-1]:
                    res.pop()

                res.append(char)

        return "".join(res)



                