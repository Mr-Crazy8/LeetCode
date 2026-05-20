bool checkAlmostEquivalent(char* word1, char* word2) {
    int arry0[26] = {0};
    int arry1[26] = {0};

    int i = 0;
    while(word1[i] != '\0')
    {
        arry0[word1[i] - 'a']++;
        i++;
    }
    i = 0;
    while (word2[i] != '\0')
    {
        arry1[word2[i] - 'a']++;
        i++;
    }
    i = 0;
    while (i < 26)
    {
        if (abs(arry0[i] - arry1[i]) > 3)
        {
            return false;
        }
        i++;
    }
    return true;
}

