class Solution:
    def isPathCrossing(self, path: str) -> bool:
        i = 0
        x = 0
        y = 0
        v = {(0, 0)}
        for i in range(len(path)):
            if path[i] == 'N':
                x += 1
            elif path[i] == 'S' :
                x -= 1
            elif path[i] == 'E':
                y += 1
            elif path[i] == 'W':
                y -= 1
            if (x, y) in v:
                return True
            v.add((x, y))

        return False