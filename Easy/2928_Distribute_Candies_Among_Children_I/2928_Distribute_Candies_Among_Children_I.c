int distributeCandies(int n, int limit) {
    int a = 0, b, c, total_ways = 0;
    while(a <= limit && a <= n)
    {
        int remaining = n - a;
        b = 0;
        while(b <= limit && b <= n)
        {
            int c = remaining - b;
            if (c >= 0 && c <= limit)
            {
                total_ways++;
            }
            b++;
        }
        a++;
    }
    return total_ways;
}