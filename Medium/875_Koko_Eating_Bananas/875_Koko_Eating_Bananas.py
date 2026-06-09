class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        left = 1
        right = max(piles)
        best_mid = 0

        while left <= right:
            mid = (left + right) // 2 
            total_sum = 0
            for pile in piles :
                total_sum += ceil(pile/mid)
            if total_sum <= h :
                best_mid = mid
                right = mid - 1
            elif total_sum > h :
                left = mid + 1
        return best_mid