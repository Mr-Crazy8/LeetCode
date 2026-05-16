class Solution:
    def numberOfLines(self, widths: List[int], s: str) -> List[int]:
        target = 100
        lines = 1
        current_width = 0
        i = 0
        cost = 0
        while i < len(s) : 
            if current_width + widths[ord(s[i]) - ord('a')] <= 100 : 
                current_width = current_width + widths[ord(s[i]) - ord('a')]
            else :
                lines += 1
                current_width = widths[ord(s[i]) - ord('a')]
            i += 1
            

    
        return ([lines, current_width])


        