class Solution:
    def characterReplacement(self, s:  str, k: int) -> int:
        count = {}
        L = 0
        max_length = 0
        
        for R in range(len(s)):
            count[s[R]] = count.get(s[R], 0) + 1
            window_size = R - L + 1
            most_frequent = max(count.values())
            changes_needed = window_size - most_frequent
            if changes_needed > k:
                count[s[L]] -= 1
                L += 1
            max_length = max(max_length, R - L + 1)
        
        return max_length