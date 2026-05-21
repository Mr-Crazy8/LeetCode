class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        stack = []
        heights.append(0)
        i = 0
        left = 0
        width = 0
        area = 0
        popped = 0
        max_area = 0
        while i < len(heights) :
            if not stack or heights[i] >= heights[stack[-1]] :
                stack.append(i)
                i += 1
            else :
                popped = stack.pop()
                height = heights[popped]
                if not stack :
                    left = -1
                else :
                    left = stack[-1]
                width = i - left - 1
                area = height * width
                if max_area < area :
                    max_area = area
        return max_area
