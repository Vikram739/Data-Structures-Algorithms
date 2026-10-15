class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:

        for r in range(9):
            seen = set()
            for c in range(9):
                val = board[r][c]
                if val == '.':
                    continue
                if val in seen:
                    return False
                
                seen.add(val)
        
        for c in range(9):
            seen = set()
            for r in range(9):
                val = board[r][c]
                if val == '.':
                    continue
                
                if val in seen:
                    return False
                seen.add(val)

        
        for br in range(0,9,3):
            for cr in range(0,9,3):
                seen = set()

                for r in range(br, br+3):
                    for c in range(cr,cr+3):
                        val = board[r][c]
                        if val == '.':
                            continue
                        
                        if val in seen:
                            return False
                        seen.add(val)

        return True

        