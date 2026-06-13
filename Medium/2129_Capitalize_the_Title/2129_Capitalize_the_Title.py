class Solution:
    def capitalizeTitle(self, title: str) -> str:
        lowercase_title = title.lower()
        result = lowercase_title.split()

        for i in range(len(result)) :
            result[i] = result[i].lower()
            if len(result[i]) > 2 :
                result[i] = result[i].capitalize() 
        output = ' '.join(result)

        return output