class Solution:
    def check_if_valid(self, nums: List[int], L, R, threshold: int) -> bool:
        last = 1
        for i in range(L, R+1):
            n = nums[i]
            if last == n % 2 or n > threshold:
                return False
            last = n % 2
        return True
    def longestAlternatingSubarray(self, nums: List[int], threshold: int) -> int:
        L = 0
        R = 0
        valid_window_size = 0
        lst = []
        length = len(nums)
        while R < length:
            if self.check_if_valid(nums, L, R, threshold):
                valid_window_size += 1
            else:
                L += 1
            R += 1
        return valid_window_size
