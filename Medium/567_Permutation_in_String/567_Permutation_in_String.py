class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        R = len(s1)
        L = 0
        s1_counter = Counter(s1)
        for L in range(len(s2)):
            sub_string = s2[L:L + R]
            sub_s2_counter = Counter(sub_string)
            if s1_counter == sub_s2_counter:
                return True
        return False