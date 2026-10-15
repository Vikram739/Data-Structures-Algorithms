class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:
        # check every row
        for r in range(9):
            seen = set()
            for c in range(9):
                val = board[r][c]
                if val == ".":
                    continue
                if val in seen:
                    return False
                seen.add(val)

        # check every column
        for c in range(9):
            seen = set()
            for r in range(9):
                val = board[r][c]
                if val == ".":
                    continue
                if val in seen:
                    return False
                seen.add(val)

        # check every 3x3 box
        for boxRow in range(0, 9, 3):
            for boxCol in range(0, 9, 3):
                seen = set()
                for r in range(boxRow, boxRow + 3):
                    for c in range(boxCol, boxCol + 3):
                        val = board[r][c]
                        if val == ".":
                            continue
                        if val in seen:
                            return False
                        seen.add(val)

        return True