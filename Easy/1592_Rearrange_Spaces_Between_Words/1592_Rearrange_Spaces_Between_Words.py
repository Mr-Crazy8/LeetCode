class Solution:
    def reorderSpaces(self, text: str) -> str:
        count_space = text.count(" ")
        list_of_words = text.split()
        count_words = len(list_of_words) 
        if count_words == 1:
            return list_of_words[0] + " " * count_space

        each_word_need = int(count_space / (count_words - 1))
        result = (" " * each_word_need).join(list_of_words)
        count_space_again = int(result.count(" "))
        spaces_used = result.count(" ")
        spaces_left = count_space - spaces_used
        return result + " " * spaces_left