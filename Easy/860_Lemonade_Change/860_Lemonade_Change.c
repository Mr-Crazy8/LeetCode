bool lemonadeChange(int* bills, int billsSize) {
    int i = 0;
    int n5 = 0;
    int n10 = 0;

    while (i < billsSize)
    {
        if (bills[i] == 5)
        {
            n5++;
        }
        else if (bills[i] == 10)
        {
            if (n5 > 0)
            {
                n5--;
                n10++;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if (n10 > 0 && n5 > 0)
            {
                n10--;
                n5--;
            }
            else if (n5 >= 3)
            {
                n5 -= 3;
            }
            else
            {
                return false;
            }
        }
        i++;
    }
    return true;
}