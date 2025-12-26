class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        lent_str = len(blocks)

        i = 0
        count = 0
        while i < k:
            if blocks[i] == 'W':
                count += 1
            i += 1
        min_count = count

        i = k
        while i < lent_str:
                if blocks[i - k] == 'W':
                    count -= 1
                if blocks[i] == 'W':
                    count += 1
                if count < min_count:
                    min_count = count
                i += 1
  
        return min_count
        