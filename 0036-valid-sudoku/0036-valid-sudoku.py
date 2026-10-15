class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:

        row = [set() for _ in range(9)]
        col = [set() for _ in range(9)]
        boxes = [[set() for _ in range(3)] for _ in range(3)]

        for r in range(9):
            for c in range(9):
                val = board[r][c]

                if val == '.':
                    continue
                box = boxes[r//3][c//3]

                if val in row[r] or val in col[c] or val in box:
                    return False

                row[r].add(val)
                col[c].add(val)
                box.add(val)
            
        return True



        