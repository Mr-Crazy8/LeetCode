bool isPalindrome(int x) {
    if (x < 0)
    {
        return false;
    }

    long int orgnumber = x;
    long int revnumber = 0;

    while (x > 0)
    {
        int remainder = x % 10;
        revnumber = revnumber * 10 + remainder;
        x /= 10;
    }
    return orgnumber == revnumber;
}