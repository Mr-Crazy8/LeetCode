class Solution:
    def minimumDifference(self, nums: List[int], k: int) -> int:
        sorted_list = sorted(nums)
        L = 0
        R = k - 1
        res = float("inf")

        max = len(nums)
        if max == 1:
            return 0

        value = 0

        while R < max:
            res = min(res, sorted_list[R] - sorted_list[L])
            R += 1
            L += 1
        


        return res
        